// print linearly from 1 to N using recursion :
// print (1 to N), if N = 4, then : 1, 2, 3, 4 will be printed as output

#include <iostream>
using namespace std;

void f(int i, int n)
{
    if (i > n)
        return;

    cout << i << " ";
    f(i + 1, n);
}

int main()
{
    int n;
    cin >> n;

    f(1, n);

    return 0;
}