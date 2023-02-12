#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void getA(){
        a = 10;
    }
};
class B: public A{
    protected:
    int b;
    public:
    void getB(){
        b = 20;
    }
    void result(){
        cout << "Addition: " << a+b << endl;
    }
};
class C{
    protected:
    int c;
    public:
    void getC(){
        c=30;
    }
};
class D: public B,public C{
    int d;
    public:
    void getD(){
        d=40;
    }
    void calculate(){
        cout << "Result: " << a+b+c+d << endl;
    }
};

int main(){
    B b;
    D d;
    b.getA();
    b.getB();
    b.result();
    d.getA();
    d.getB();
    d.getC();
    d.getD();
    d.calculate();
    return 0;
}
