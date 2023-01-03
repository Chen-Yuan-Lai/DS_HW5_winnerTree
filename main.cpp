#include "winnerTree.h"
#include <stack>
using namespace std;

int main()
{
    stack<int> a[8];
    a[0].push(16);
    a[0].push(15);
    a[0].push(10);
    a[1].push(38);
    a[1].push(20);
    a[1].push(9);
    a[2].push(30);
    a[2].push(20);
    a[2].push(20);
    a[3].push(25);
    a[3].push(15);
    a[3].push(6);
    a[4].push(50);
    a[4].push(15);
    a[4].push(8);
    a[5].push(16);
    a[5].push(11);
    a[5].push(9);
    a[6].push(99);
    a[6].push(95);
    a[6].push(90);
    a[7].push(20);
    a[7].push(18);
    a[7].push(17);

    winnerTree x(8, a);
    cout << x << endl;
    x.build();
    cout << x << endl;
    int f = x.pop();
    cout << x << endl;
}