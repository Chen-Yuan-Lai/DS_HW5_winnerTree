#ifndef WINNERTREE_H
#define WINNERTREE_H
#include <stack>
#include <iostream>
using namespace std;

class winnerTree
{
    class Node;

public:
    winnerTree(int k, stack<int> *r);
    ~winnerTree();
    void build();
    int pop();
    friend ostream &operator<<(ostream &os, winnerTree &s);

private:
    class Node
    {
    public:
        int data;
        int run;
    };
    int parent(int i) { return i / 2; }
    int leftChild(int i) { return 2 * i; }
    int rightChild(int i) { return 2 * i + 1; }
    Node *tree;
    stack<int> *records;
    int size;
    int K;
};

#endif