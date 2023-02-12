#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    public:
    void getA(int A){
        a = A;
    }
    void dispA(){
        cout << "A: " << a << endl;
    }
};
class derived1{
    protected:
    int b;
    public:
    void getB(int B){
        b = B;
    }
    void dispB(){
        cout << "B: " << b << endl;
    }
};
class derived2 : public Base, public derived1{
    int c;
    public:
    void getC(int C){
        c = C;
    }
    void dispC(){
        cout << "C: " << c << endl;
    }
    void calculate(){
        cout << "Result: " << a+b+c << endl;
    }
};

int main(){
    derived2 d;
    int x,y,z;
    cout << "Enter A: ";
    cin >> x;
    cout << endl;
    cout << "Enter B: ";
    cin >> y;
    cout << endl;
    cout << "Enter C: ";
    cin >> z;
    cout << endl;
    d.getA(x);
    d.getB(y);
    d.getC(z);
    d.dispA();
    d.dispB();
    d.dispC();
    d.calculate();
    return 0;
}
