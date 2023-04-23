#include "/Users/riyarawat/Desktop/stdc++.h"
using namespace std;

void display(){
    int gcd = 0;
    int n1=100, n2=50;
    for(int i = 1; i < n1; i++){
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
