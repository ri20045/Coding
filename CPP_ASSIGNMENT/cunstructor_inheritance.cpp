#include<iostream>
using namespace std;
// Create class A as base class.Derive class B from A.
// Derive class C from class B.all class having one data member .
// Initialize it using constructor.Create following member functions.
// 1)Perform multiplication operation
// 2)Display all values.

class A{
    protected:
    int a;
    public:
    A(){
        a=10;
    }
};
class B:public A{
    protected:
    int b;
    public:
    B(){
        b=20;
    }
};
class C:public B{
    int c;
    public:
    C(){
        c=30;
    }
    int multiplication(){
        return a*b*c;
    }
    void Display(){
        cout << "Result: " << multiplication();
    }
};
int main(){
    A a;
    B b;
    C c;
    c.multiplication();
    c.Display();
    return 0;
}
