#include<bits/stdc++.h>
using namespace std;

void display(){
    int gcd = 0;
    int n1, n2;
    cout << "enter n1: "; cin >> n1;
    cout << "enter n2: "; cin >> n2;
    for(int i = 1; i <= min(n1,n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    cout << gcd;
}
int main(){
    display();
    return 0;
}
