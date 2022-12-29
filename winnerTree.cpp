#include "winnerTree.h"
#include <math.h>
#include <stack>
using namespace std;

winnerTree::winnerTree(double k) : k(k)
{
    size = pow(2, k);
    tree = new int[size];
    for (int i = k; i < size; i++)
    {
        tree[i] = records[i % k].pop();
    }
}

void winnerTree::build(stack<T> *records)
{
    int index = 0;
    if (leftChild(index) >= size)
    {
        tree[parent(index)] = tree[index] > tree[index + 1] ? tree[index] : tree[index] + 1;
    }
    build(leftChild(index));
    build(rightChild(inedx));
}