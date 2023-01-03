#include "winnerTree.h"
#include <math.h>
#include <stack>
using namespace std;

winnerTree::winnerTree(int k, stack<int> *r)
{
    records = r;
    K = k;
    size = k * 2;
    tree = new Node[size];
    for (int i = k; i < size; i++)
    {
        int first = i % k;
        tree[i].data = records[first].top();
        tree[i].run = first;
        records[first].pop();
    }
}

winnerTree::~winnerTree()
{
    delete[] tree;
}

void winnerTree::build()
{
    for (int i = size - 1; i > 0; i -= 2)
    {
        if (tree[i].data <= tree[i - 1].data)
        {
            tree[parent(i)].data = tree[i].data;
            tree[parent(i)].run = tree[i].run;
        }
        else
        {
            tree[parent(i)].data = tree[i - 1].data;
            tree[parent(i)].run = tree[i - 1].run;
        }
    }
}

int winnerTree::pop()
{
    Node top = tree[1];
    int run = top.run;
    // update a element into the leaf node
    tree[run + K].data = records[run].top();
    int index = parent(run + K);
    // update the winner tree
    while (index >= 1)
    {
        if (tree[leftChild(index)].data <= tree[rightChild(index)].data)
        {
            tree[index].data = tree[leftChild(index)].data;
            tree[index].run = tree[leftChild(index)].run;
        }
        else
        {
            tree[index].data = tree[rightChild(index)].data;
            tree[index].run = tree[rightChild(index)].run;
        }
        index = parent(index);
    }
    records[run].pop();
    return top.data;
}

ostream &operator<<(ostream &os, winnerTree &s)
{
    for (int i = 1; i < s.size; i++)
    {
        os << s.tree[i].data << " ";
    }
    os << endl;
    return os;
}
