#include<bits/stdc++.h>
using namespace std;

void display(){
    vector<int>res;
    int n;
    cout << "Enter n: ";
    cin >> n;
    while(n >=1){
        if(n % 2 == 0) res.push_back(0);
        if(n % 2 != 0) res.push_back(1);
        n = n / 2;
    }
    reverse(res.begin(),res.end());
    for(auto it : res){
        cout << it;
    }
}
int main(){
    display();
    return 0;
}
