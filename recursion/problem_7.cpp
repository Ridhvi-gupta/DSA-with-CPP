// Factorial of a number using recursion :
// functional recursive way :

#include <iostream>
using namespace std;

int f(int n)
{
    if (n == 0)
        return 1;

    return n * f(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << f(n);

    return 0;
}
 // time complexity : O(n) and space complexity : O(n) (due to recursion stack).

 
// If we will use : if (n == 1) return 1; it works for positive n (n ≥ 1), but f(0) would not stop correctly. So for a general factorial function, n == 0 is safer.

// Parameterized recursive way :

/*
#include <iostream>
using namespace std;

void f(int i, int fact)
{
    if (i < 1)
    {
        cout << fact;
        return;
    }

    f(i - 1, fact * i);
}

int main()
{
    int N;
    cin >> N;

    f(N, 1);

    return 0;
}
*/