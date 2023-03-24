#include<iostream>
using namespace std;
// 6) Make one class complex which includes float member x and y and include 
// 2 friend non member function friend complex sum(complex, complex); 
// It calculates sum of two complex and return complex object friend void show(complex); It will display complex object.

class Complex{
    float x,y;
    public:
    Complex(float a, float b){
        x = a;
        y = b;
    }
    friend Complex sum(Complex, Complex);
    friend void show(Complex);
};

Complex sum(Complex c1, Complex c2){
    float ans1 = c1.x + c2.x;
    float ans2 = c2.y + c2.y;
    return Complex(ans1, ans2);
}
void show(Complex c){
    cout << c.x << " + " << c.y << "i" << endl;
}
int main(){
    Complex a(2.5,1.0);
    Complex b(1.7,-2.0);
    Complex c = sum(a,b);
    show(c);
    return 0;
}
