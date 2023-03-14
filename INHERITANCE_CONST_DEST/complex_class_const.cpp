#include<iostream>
using namespace std;
// Create complex class. Two data member real and
// imaginary. Create function which adds two objects and assigns answer to the third object. 
// Assign two objects with parameterized constructor
class Complex{
public:
    int real;
    int imag;
      Complex(int x, int y) {
      real = x;
      imag = y;
      }
      Complex(){
     
      }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    void sum(Complex c1, Complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    };
int main()
    {
    int x,y;
        Complex c3;
        cout<<"Enter real and imaginary part of first complex number";
        cin>>x;
        cin>>y;
        Complex c1 = Complex(x, y);
        cout<<"Enter real and imaginary part of second complex number";
        cin>>x;
        cin>>y;
        Complex c2 = Complex(x, y);
        cout<<"Sum of two complex numbers is";
        c3.sum(c1,c2);
        c3.display();
    return 0;
    }
