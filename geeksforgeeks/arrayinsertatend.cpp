// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    // You need to insert the given element at the given index. 
    // After inserting the elements at index, elements
    // from index onward should be shifted one position ahead
    // You may assume that the array already has sizeOfArray - 1
    // elements.
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        //Your code here
              
        
    }
};

void insertAtEnd(int arr[],int sizeOfArray,int element);


 // } Driver Code Ends
//User function Template for C++


// You only need to insert the given element at 
// the end, i.e., at index sizeOfArray - 1. You may 
// assume that the array already has sizeOfArray - 1
// elements. 
void insertAtEnd(int arr[],int sizeOfArray,int element)
{
    arr[sizeOfArray - 1] = element;
}



// { Driver Code Starts.

int main() 
{
    int t;
    
    //taking testcases
    cin>>t;
    while(t--)
    {
        int sizeOfArray;
        
        //input size of Array
        cout << "Input size: ";
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        
        //inserting elements in the array
        cout << "Input array element: ";
        for(int i=0;i<sizeOfArray-1;i++)
        cin>>arr[i];
        
        //input element to be inserted
        int element;
        cout << "Input element: ";
        cin>>element;
        
        //calling insertAtEnd() function
        insertAtEnd(arr,sizeOfArray,element);
        
        //printing the elements of the array
        for(int i=0;i<sizeOfArray;i++)
        cout<<arr[i]<<" ";
        
        cout<<endl;
        
    }
} 