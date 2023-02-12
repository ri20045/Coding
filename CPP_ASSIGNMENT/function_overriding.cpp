#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout << "This is base class" << endl;
    }
};
class B: public A{
    public:
    void func(){
        cout << "This is derived class" << endl;
    }
};
int main(){
    B b;
    b.func();
    b.A::func();
    return 0;
}
