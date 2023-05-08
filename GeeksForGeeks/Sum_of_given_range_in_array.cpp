#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
    cout << arr[i] << " ";
}
cout << "\n";

int prefix_sum[n];
prefix_sum[0] = arr[0];
for(int i=1;i<n;i++){
    prefix_sum[i] = prefix_sum[i-1] + arr[i]; 
}
for(int i=0;i<n;i++){
    cout << prefix_sum[i] << " ";
}

cout << "\n";
int q,RangeSum;
int x,y;
cin >> q;
while(q--){
    cin >> x >> y;
    RangeSum = prefix_sum[y] - prefix_sum[x-1];
    cout << RangeSum;
}
     return 0;
}
