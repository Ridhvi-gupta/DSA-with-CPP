// print linearly from N to 1 using recursion and backtracking :
// print (N to 1), if N = 4, then : 4, 3, 2, 1 will be printed as output

#include <iostream>
using namespace std;

void f(int i, int N)
{
    if (i > N)
        return;

    f(i + 1, N); // (backtracking : Print line is written after the recursion call)
    cout << i << " ";
}

int main()
{
    int N;
    cin >> N;

    f(1, N);

    return 0;
}