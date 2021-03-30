#include <bits/stdc++.h>

using namespace std;

// implementation of bruteforce algorithm
// time complexity O(n * d)

// void leftRotatebyOne(int arr[], int n)
// {
//     int temp = arr[0], i;
//     for(i = 0; i < n - 1; i++)
//     {
//         arr[ i ] = arr[ i + 1 ];
//     }
//     arr[n-1] = temp;
// }

// void leftRotate(int arr[], int d, int n)
// {
//     for(int i = 0; i < d; i++)
//         leftRotatebyOne(arr, n);
// }
// void printArray(int arr[], int n, int d)
// {
//     cout << "array rotated by " << d << " : ";
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}, d = 2;
//     int n = sizeof(arr)/sizeof(arr[0]);

//     leftRotate(arr, d, n);
//     printArray(arr, n, d);
// }


// Juggling Algorithm
int gcd(int a, int b)
{
    if(b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int gcd_subtract(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

void leftRotate(int arr[], int d, int n)
{
    // to handle if d >= n
    d = d % n;
    int __gcd = gcd(d, n);
}

void printArray(int arr[], int n, int d)
{
    cout << "array rotated by " << d << " : ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}, d = 2;
    int n = sizeof(arr)/sizeof(arr[0]);

    // cout << "GCD value " << gcd_subtract(35, 65) << endl;
    cout << "GCD value " << gcd(35, 65) << endl;
    // leftRotate(arr, d, n);
    // printArray(arr, n, d);
}