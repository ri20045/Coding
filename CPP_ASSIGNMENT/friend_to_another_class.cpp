#include<iostream>
using namespace std;
// Write a program to find out sum of two private data members numA and numB of two classes 
// ABC and XYZ using a common friend function. 
// Assume that the prototype for both the classes will be int add(ABC, XYZ);
class XYZ;
class ABC{
    int num1;
    public:
    void setvalue(){
        num1 = 10;
    }
   friend int add(ABC,XYZ);
};
class XYZ{
    int num2;
    public:
    void setvalue(){
        num2 = 20;
    }
    friend int add(ABC,XYZ);
};
int add(ABC obj1, XYZ obj2){
    return (obj1.num1 + obj2.num2);
}

int main(){
   
   ABC obj1;
   XYZ obj2;
   obj1.setvalue();
   obj2.setvalue();
   cout << "Sum = " << add(obj1,obj2);

    return 0;
}
