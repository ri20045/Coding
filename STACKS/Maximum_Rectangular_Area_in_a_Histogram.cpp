//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
   long long getMaxArea(long long arr[], int n)
{
    // Your code here
    int pseudoIndex = -1;
    vector<long long> left;
    stack<pair<long long, long long>> s;
    for(int i=0; i<n; i++){
        if(s.size() == 0){
            left.push_back(pseudoIndex);
        }
        else if(s.size() > 0 && s.top().first < arr[i]){
            left.push_back(s.top().second);               
        }
        else if(s.size() > 0 && s.top().first >= arr[i]){
            while(s.size() > 0 && s.top().first >= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                left.push_back(pseudoIndex);
            }
            else{
                left.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    pseudoIndex = n;
    vector<long long> right;
    while(!s.empty()){
        s.pop();
    }
    for(int i=n-1; i>=0; i--){
        if(s.size() == 0){
            right.push_back(pseudoIndex);
        }
        else if(s.size() > 0 && s.top().first < arr[i]){
            right.push_back(s.top().second);               
        }
        else if(s.size() > 0 && s.top().first >= arr[i]){
            while(s.size() > 0 && s.top().first >= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
               right.push_back(pseudoIndex);
            }
            else{
                right.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    reverse(right.begin(), right.end());
    vector<long long> width(n);
    for(int i=0; i<n; i++){
         width[i] = right[i] - left[i] - 1;
    }
    vector<long long> area(n);
    for(int i=0; i<n; i++){
        area[i] = arr[i] * width[i];
    }
    long long maxElement = area[0]; 
    for(int i=0; i<n; i++){
        if(area[i] > maxElement){
            maxElement = area[i];
        }
    }
    return maxElement;
}
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends
