#include <bits/stdc++.h>
using namespace std;

// own solution
int sumRecursive(int n, int k)
{
    if(n==0)
        return k;
    k += n;
    return sumRecursive(n-1, k);
}

// solution from geeksforgeeks
int getSum(int n)
{
    if(n==0)
        return 0;
    return n+getSum(n-1);
}

int main()
{
    cout << "enter number: ";
    int n, k=0, result=0;
    cin >> n;
    cout << "sum of " << n << " number is: " << sumRecursive(n, result) << endl;
}