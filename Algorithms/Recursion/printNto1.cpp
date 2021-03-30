#include <bits/stdc++.h>
using namespace std;

int printRecursive(int n)
{
    if(n==0)
        return 0;
    cout << n << " ";
    printRecursive(n-1);
}


int main()
{
    cout << "enter number: ";
    int n;
    cin >> n;
    printRecursive(n);
}