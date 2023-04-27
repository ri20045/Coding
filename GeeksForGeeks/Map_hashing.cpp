#include<bits/stdc++.h>
using namespace std;
//map hashing
int main(){

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

int q,value;
cin >> q;
while(q--){
    cin >> value;
    cout << mpp[value] << "\n";
}
    return 0;
}
