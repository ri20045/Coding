//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
         vector<int> v;
        for(int j=0;j<m;j++){
            v.push_back(M[0][j]);
        }
        int mx = max_Area(v);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j] == 0){
                    v[j] = 0;
                }
                else{
                    v[j] = v[j] + M[i][j];
                }
            }
            mx = max(mx, max_Area(v));
        }
        return mx;
    }
    int max_Area(vector<int> v){
        //for left nearest greater
    int n = v.size();
    int pseudoIndex = -1;
    vector<int> left;
    stack<pair<int , int>> s;
    for(int i=0; i<n; i++){
        if(s.size() == 0){
            left.push_back(pseudoIndex);
        }
        else if(s.size() > 0 && s.top().first < v[i]){
            left.push_back(s.top().second);               
        }
        else if(s.size() > 0 && s.top().first >= v[i]){
            while(s.size() > 0 && s.top().first >= v[i]){
                s.pop();
            }
            if(s.size() == 0){
                left.push_back(pseudoIndex);
            }
            else{
                left.push_back(s.top().second);
            }
        }
        s.push({v[i], i});
    }
    //for right nearest greater
     pseudoIndex = n;
    vector<int> right;
    while(!s.empty()){
        s.pop();
    }
    for(int i=n-1; i>=0; i--){
        if(s.size() == 0){
            right.push_back(pseudoIndex);
        }
        else if(s.size() > 0 && s.top().first < v[i]){
            right.push_back(s.top().second);               
        }
        else if(s.size() > 0 && s.top().first >= v[i]){
            while(s.size() > 0 && s.top().first >= v[i]){
                s.pop();
            }
            if(s.size() == 0){
               right.push_back(pseudoIndex);
            }
            else{
                right.push_back(s.top().second);
            }
        }
        s.push({v[i], i});
    }
    reverse(right.begin(), right.end());
    //maximum area
    vector<int> width(n);
    for(int i=0; i<n; i++){
         width[i] = right[i] - left[i] - 1;
    }
    vector<int> area(n);
    for(int i=0; i<n; i++){
        area[i] = v[i] * width[i];
    }
    int maxElement = area[0]; 
    for(int i=0; i<n; i++){
        if(area[i] > maxElement){
            maxElement = area[i];
        }
    }
    return maxElement;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends
