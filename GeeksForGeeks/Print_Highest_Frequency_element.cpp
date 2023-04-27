#include<bits/stdc++.h>
using namespace std;
//print highest frequency element
int main(){

int max = INT_MIN;
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
    if(it.second > max) max = it.first;
}
cout << max;
    return 0;
}
