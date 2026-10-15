// print linearly from 1 to N using recursion and backtracking :
// print (1 to N), if N = 4, then : 1, 2, 3, 4 will be printed as output

#include <iostream>
using namespace std;

void f(int i, int n)
{
    if (i < 1)
        return;

    f(i - 1, n); // (backtracking : Print line is written after the recursion call)
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;

    f(n, n); 

    return 0;
}