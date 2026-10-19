// Print names 'n' times using recursion in parameters without any global variables:

// without else :
#include <iostream>
using namespace std;

void printName(int i, int n)
{
    if (i > n)
        return;

    cout << "raj" << endl;
    printName(i + 1, n);
}

int main()
{
    int n;
    cin >> n;

    printName(1, n);

    return 0;
}

// with else :
/*
#include <iostream>
using namespace std;

void f(int i, int n) 
{
    if (i > n)
        return;
    else
    {
        cout << "raj" << endl;
        f(i + 1, n);
    }
}
int main()
{
    int n;
    cin >> n;

    f(1, n);

    return 0;
}
*/

