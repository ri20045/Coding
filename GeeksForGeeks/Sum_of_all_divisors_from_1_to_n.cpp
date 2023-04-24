#include<bits/stdc++.h>
using namespace std;

int getDivisorsSum(int n) {
    vector<int> v;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            v.push_back(i);
        }
    }
    for(auto it : v){
        sum += it;
    }
    return sum;
}

void display(){
    int n;
    cin >> n;

    int ans = 0;

    for(int i=1;i<=n;i++) {
        ans += getDivisorsSum(i);
    }

    cout << ans << "\n";
}
int main(){
    display();
    return 0;
}
