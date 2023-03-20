#include<iostream>
using namespace std;
// write a program that will find the maximum of two variables 
// of two different classes in an internal function of one class, 
// also show the use of constructor to initialize the values. 
class B;
class A{
    int n;
    public:
    A(int a){
        n = a;
    }
    friend int max(A a, B b);
};
class B{
    int n;
    public:
    B(int b){
        n = b;
    }
    friend int max(A a, B b);
};
int max(A a,B b){
    return ((a.n>b.n)? a.n:b.n);
}
int main(){
    
    A a(1);
    B b(2);
    cout << "\nlargest value is: " << max(a,b);
    return 0;
}
