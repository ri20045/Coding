//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long gcd = 0;
        for(long long i = 1; i <= min(A,B); i++){
        if(A % i == 0 && B % i == 0){
            gcd = i;
        }
        }
        vector<long long> v;
        long long lcm = (A * B)/gcd;
        v.push_back(lcm);
        v.push_back(gcd);
        return v;
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
