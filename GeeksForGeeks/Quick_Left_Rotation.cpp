//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	//Given an array arr[] of size N and an integer K, the task is to left rotate the array K indexes
	public:
	void leftRotate(int arr[], int k, int n) 
	{
	    k = k % n;
	    int temp[k];
	   // Your code goes here
	   for(int i = 0;i < k;i++){
	       temp[i] = arr[i];
	   }
	   for(int i = k;i < n;i++){
	       arr[i-k] = arr[i];
	   }
	   for(int i = n-k;i < n;i++){
	       arr[i] = temp[i-(n-k)];
	   }
	} 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }
        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends
