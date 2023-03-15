#include<iostream>
using namespace std;
// Create complex class. Two data member real and
// imaginary. Create function which adds two objects and assigns answer to the third object. 
// Assign two objects with parameterized constructor
class complex{
    int real,imag;
    public:
    complex(int x,int y){
        real=x;
        imag=y;
    }
    complex(){}
    complex add(complex c1,complex c2){
        complex c3;
        c3.real=c1.real+c2.real;
        c3.imag=c1.imag+c2.imag;
        return c3;
    }
    void display(){
        cout << real << "+" << imag << "i" << endl;
    }
};
int main(){
    complex c4;
    int x,y;
    cout << "\nEnter real and imag: ";
    cin >> x >> y;
    complex c1=complex(x,y);
    c1.display();
    cout << "\nEnter real and imag: ";
    cin >> x >> y;
    complex c2=complex(x,y);
    c2.display();
    c4=c4.add(c1,c2);
    c4.display();
    return 0;
}
