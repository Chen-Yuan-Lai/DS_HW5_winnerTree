#include "winnerTree.h"
#include <stack>
using namespace std;

int main()
{
    stack<int> a[8];
    a[0].push(10);
    a[0].push(15);
    a[0].push(16);
    a[1].push(9);
    a[1].push(20);
    a[1].push(38);
    a[2].push(20);
    a[2].push(20);
    a[2].push(30);
    a[3].push(6);
    a[3].push(15);
    a[3].push(25);
    a[4].push(8);
    a[4].push(15);
    a[4].push(50);
    a[5].push(9);
    a[5].push(11);
    a[5].push(16);
    a[6].push(90);
    a[6].push(95);
    a[6].push(99);
    a[7].push(17);
    a[7].push(18);
    a[7].push(20);

    winnerTree x(8);
}