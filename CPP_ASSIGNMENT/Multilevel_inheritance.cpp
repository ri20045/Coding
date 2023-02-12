#include<iostream>
using namespace std;
class parent{
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
class child1 : public parent{
    protected:
    int b;
    public:
    void getB(int B){
        b= B;
    }
    void dispB(){
        cout << "\nValue of B: " << b;
    }
};
class child2 : public child1{
    int c;
    public:
    void getC(int C){
        c = C;
    }
    void dispC(){
        cout << "\nValue of C: " << c;
    }
    void calculate(){
        cout << "\nResult: " << a+b+c;
    }
};
int main(){
    child2 chi;
    int x,y,z;
    cout << "\nEnter a: ";
    cin >> x;
    cout << "\nEnter b: ";
    cin >> y;
    cout << "\nEnter c: ";
    cin >> z;
    chi.getA(x);
    chi.getB(y);
    chi.getC(z);
    chi.dispA();
    chi.dispB();
    chi.dispC();
    chi.calculate();
    return 0;
}
