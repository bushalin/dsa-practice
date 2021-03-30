#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int result = 0;
    while(n>0)
    {
        n = n/10;
        result++;
    }
    return result;
}

int main()
{
    cout << "Enter number: ";
    int n;
    cin>>n;
    cout << "Total number: " << countDigits(n) << endl;
}