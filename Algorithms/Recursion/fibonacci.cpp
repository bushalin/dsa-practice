#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int result;
    if(n == 0)
        return 0;
    else if(n == 1 || n ==2)
        return 1;
    else
        return (fib(n-1) + fib(n-2));
}

int main()
{
    int n = 10;
    cout << "Fibonacci series of " << n << " elements is : ";
    for(int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }
    return 0;
}