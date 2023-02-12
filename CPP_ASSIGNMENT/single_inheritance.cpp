#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void getA(int A){
        a = A;
    }
    void dispA(){
        cout << "\nValue of a: " << a;
    }
};
class derived: public base{
    int b;
    public:
    void getB(int B){
        b = B;
    }
    void dispB(){
        cout << "\nValue of B: " << b;
    }
    void addition(){
        cout << "\nAddition: " << a+b;
    }
};
int main(){
    derived d;
    int x,y;
    cout << "\nEnter a: ";cin >> x;
    cout << "\nEnter b: ";cin >> y;
    d.getA(x);
    d.getB(y);
    d.dispA();
    d.dispB();
    d.addition(); 
    return 0;
}
