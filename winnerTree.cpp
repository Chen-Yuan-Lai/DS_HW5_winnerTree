#include "winnerTree.h"
#include <math.h>
#include <stack>
using namespace std;

winnerTree::winnerTree(double k, stack<int> *r)
{
    K = k;
    records = r;
    size = (int)pow(2, k);
    tree = new int[size];
    for (int i = k; i < size; i++)
    {
        int first = i % (int)k;
        tree[i] = records[first].top();
        records[first].pop();
    }
}
void winnerTree::build()
{
    build(0);
}

void winnerTree::build(int index)
{
    if (index < size)
    {
        build(leftChild(index));
        build(rightChild(index));
        tree[index] = tree[left] < tree[right] ? tree[left] : tree[right];
    }
}