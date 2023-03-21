#include<iostream>
using namespace std;
// Write a C++ program to create two classes. Find out largest object from the object of two different classes.
class A{
    int a;
    public:
    A(int n1){
        a = n1;
    }
    int getA(){
        return a;
    }
};
class B{
    int b;
    public:
    B(int n2){
        b = n2;
    }
    int getB(){
        return b;
    }
};
int main(){
   A obj1(2);
   B obj2(4);
   if(obj1.getA()>obj2.getB()){
    cout << "\nLargest value is: " << obj1.getA();
   }
   else{
    cout << "\nLargest value is: " << obj2.getB();
   }

   return 0;
}
