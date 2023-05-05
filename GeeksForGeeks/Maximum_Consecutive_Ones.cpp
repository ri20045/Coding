#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[] = {1,1,1,1,1,0,1,1,1,1,1,1,1};
int count = 0;
int ans = 0;
for(int i=0;i<13;i++)
{
    if(arr[i] == 1){
        count++;
        if(count > ans) ans = count;
    }
    else{
        count = 0;
    }
}
cout << ans;
    return 0;
}
