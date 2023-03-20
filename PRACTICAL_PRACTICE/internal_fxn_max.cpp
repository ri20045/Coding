#include<iostream>
using namespace std;
// write a program that will find the maximum of two variables 
// of two different classes in an internal function of one class, 
// also show the use of constructor to initialize the values. 
class A{
    int n1;
    public:
    A(int a){
        n1 = a;
    }
    friend class B;
};
class B{
    int n2;
    public:
    B(int b){
        n2 = b;
    }
   int max(A a){
    return ((a.n1>n2)?a.n1:n2);
   }
};
int main(){
    
    A a(10);
    B b(2);
    cout << "\nlargest value is: " << b.max(a);
    return 0;
}
