#include "/Users/riyarawat/Desktop/stdc++.h"
using namespace std;

void display(){
    int a,b;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b = b%a;
    }
    if(a==0) cout << "gcd: " << b;
    else cout << "gcd: " << a;
}
int main(){
    display();
    return 0;
}
