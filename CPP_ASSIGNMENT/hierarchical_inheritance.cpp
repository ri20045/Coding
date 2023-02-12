#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void dispA(){
       a = 10;
    }
    void dispinfo(){
        cout << "Inside class A" << endl;
    }
};
class B: public A{
    int b;
    public:
    void getvalue(){
        b=20;
    }
    void dispB(){
        cout << "addition " << a+b << endl;
    }
};
class C: public A{
    public:
    void dispC(){
        cout << "Inside class C" << endl;
    }
};
int main(){
    B b;
    C c;
    b.dispA();
    b.getvalue();
    b.dispB();
    c.dispinfo();
    return 0;
}
