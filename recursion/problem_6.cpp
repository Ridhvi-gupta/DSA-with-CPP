// Summation of 1st N natural no.s :
// M1 : using for loop

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << sum;

    return 0;
}

// M2 : using recursion (parameterised and functional way) 

// Parameterized way : (in parameters without any global variables)
/**
 * This is a parameterized approach to calculate the sum of the first N natural numbers.
 * It uses recursion to break down the problem into smaller subproblems.
 
#include <iostream>
using namespace std;

void f(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }

    f(i - 1, sum + i);
}

int main()
{
    int N;
    cin >> N;

    f(N, 0);

    return 0;
}
*/

// Functional way :

/*
    This is a functional approach to calculate the sum of the first N natural numbers.
    It uses recursion to break down the problem into smaller subproblems.

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << sum(n);

    return 0;
}
*/
