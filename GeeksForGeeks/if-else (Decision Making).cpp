
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        if(n<m){
            cout << "lesser";
        }
        else if(n==m){
            cout << "equal";
        }
        else{
            cout << "greater";
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }
    return 0;
}
