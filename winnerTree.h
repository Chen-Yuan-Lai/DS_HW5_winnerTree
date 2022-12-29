#ifndef WINNERTREE_H
#define WINNERTREE_H
#include <stack>
using namespace std;

class winnerTree
{
public:
    winnerTree(double k);
    ~winnerTree();
    void build(stack<int> *records);
    int pop();
    friend ostream &operator<<(ostream &os, winnerTree &s);

private:
    int parent(int i) { return i / 2; }
    int leftChild(int i) { return 2 * i; }
    int rightChild(int i) { return 2 * i + 1; }
    int *tree;
    double size;
    int k;
};

#endif