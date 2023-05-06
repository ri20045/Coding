#include<bits/stdc++.h>
using namespace std;

int main(){
// suffix sum
//n = 4
// 29 27 21 11
// array->2 6 10 11

int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
    cout << arr[i] << " ";
}
cout << endl;
int suffix_sum[n];
suffix_sum[n-1] = arr[n-1];
for(int i=n-2;i>=0;i--){
    suffix_sum[i] = suffix_sum[i+1] + arr[i]; 
}
for(int i=0;i<n;i++){
    cout << suffix_sum[i] << " ";
}
    return 0;
}
