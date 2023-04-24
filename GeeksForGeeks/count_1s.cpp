#include<bits/stdc++.h>
using namespace std;

void display(){
    vector<int> v;
    int n;
    int count = 0;
    cout << "Enter n: "; cin >> n;
    while(n >= 1){
        if(n % 2 == 0)
        v.push_back(0);
        if(n % 2 != 0){
        v.push_back(1);
        count++;
        }
        n = n / 2;
    }
    reverse(v.begin(),v.end());
    for(auto it:v){
        cout << it;
    }
    cout << " " << count;
}
int main(){
    display();
    return 0;
}
