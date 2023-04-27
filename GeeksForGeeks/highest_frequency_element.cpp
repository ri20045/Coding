#include<bits/stdc++.h>
using namespace std;
//print highest frequency
int main(){

int max = INT_MIN;
int ans;
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}

map<int,int> mpp;
for(int i=0;i<n;i++){
    mpp[arr[i]]++;
}

for(auto it : mpp){
    cout << it.first << " " << it.second << "\n";
}

for(auto it : mpp){
    if(it.second > max) {
        max = it.second
        ans = it.first;
    }
}
cout << ans;
    return 0;
}
