// print linearly from N to 1 using recursion :
// print (N to 1), if N = 4, then : 4, 3, 2, 1 will be printed as output

#include <iostream>
using namespace std;

void f(int i, int n)
{
    if (i < 1)
        return;

    cout << i << " ";
    f(i - 1, n);
}

int main()
{
    int n;
    cin >> n;

    f(n, n);

    return 0;
}