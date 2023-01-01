#ifndef WINNERTREE_H
#define WINNERTREE_H
#include <stack>
using namespace std;

class winnerTree
{
public:
    winnerTree(double k, stack<int> *r);
    ~winnerTree();
    void build();
    void build(int index);
    int pop();
    // friend ostream &operator<<(ostream &os, winnerTree &s);

private:
    int parent(int i) { return i / 2; }
    int leftChild(int i) { return 2 * i; }
    int rightChild(int i) { return 2 * i + 1; }
    int *tree;
    stack<int> *records;
    int size;
    int K;
};

#endif