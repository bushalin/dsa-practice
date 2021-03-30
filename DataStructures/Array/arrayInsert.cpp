// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

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

        // checking if the index is the 
        // last element of the array
        if(sizeOfArray == index)
        {
            arr[index-1] = element;
        }
        else{
            int tempSize;
            // handling negative tempsize values
            if(index>sizeOfArray)
            {
                tempSize = index - sizeOfArray;
            }
            tempSize = sizeOfArray-index-1;
            
            
            int tempArr[tempSize], i, j = 0;
            
            for(i = 0; i <= tempSize; i++)
            {
                tempArr[i] = arr[i+index];
            }
            
            arr[index] = element;
            
            for(i = 0; i < tempSize; i++)
            {
                arr[i+index+1] = tempArr[i];
            }
        }

        
    }
    

};


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;//Input testcases
    while(t--)
    {
        
        int sizeOfArray;
        
        //input size of Array
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        
        //input elements in the Array
        for(int i = 0; i < sizeOfArray-1; i++)
        cin>>arr[i];
        
        int index;
        //input index
        cin>>index;
        int element;
        //input element
        cin>>element;
        Solution obj;
        //calling insertAtIndex() function
        obj.insertAtIndex(arr, sizeOfArray, index, element); //Complete this function
        
        for(int i = 0; i < sizeOfArray; i++)//Printing the array for verification
        cout<<arr[i]<<" ";
        
        cout<<endl;
        
    }
    
	return 0;
}  // } Driver Code Ends