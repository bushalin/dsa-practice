#include <bits/stdc++.h>
using namespace std;

void recursivePrint(int n)
{
    if(n==0)
        return;
    recursivePrint(n-1);
    cout << n << " ";
}

void recursivePrint(int n, int k)
{
    if(n==0)
        return;
    cout << k << " ";
    recursivePrint(n-1, k+1);
}

int main()
{
    cout << "enter number: ";
    int n, k = 1;
    cin >> n;
    cout << "No tail recursion: " << endl;
    recursivePrint(n);
    cout << endl;
    cout << "Tail recursion: " << endl;
    recursivePrint(n, k);
    cout << endl;
}