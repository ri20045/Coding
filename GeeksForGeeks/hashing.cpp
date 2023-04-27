#include<bits/stdc++.h>
using namespace std;
// array diya hai n numbers user input output occurence of n 1 5 2 5 1 3
// output occurrences of each number
int main(){

int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
//precompute
int hash[20] = {0};
for(int i=0;i<n;i++){
    hash[arr[i]]++;
}

int q,values;
cin >> q;
while(q--){
    cin >> values;
    cout << hash[values] << "\n";//fetching count
}
    return 0;
}
