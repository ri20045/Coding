#include<iostream>
using namespace std;
// Define class Complex with members real and imaginary . 
// Also define function to setdata() to initialize the members, 
// print() to display values and addnumber() that adds two complex objects.
// Demonstrate concept of passing object as argument.

class Complex{

    int real,imaginary;
    public:
    void setdata(){
        cout << "\nReal number: \n";
        cin >> real;
        cout << "Imaginary number: \n";
        cin >> imaginary;
    }
    void print(){
        cout << "Real number is: " << real;
        cout << "\nImaginary number is: " << imaginary;
    }
    void addnumber(Complex comp1, Complex comp2){
        real = comp1.real + comp2.real;
        imaginary = comp1.imaginary + comp2.imaginary;
    }
    void display(){
        cout << "\nsum = " << real << " + " << imaginary << "i" << endl;
    }

};

int main(){

    Complex x,y,z;
    x.setdata();
    x.print();
    
    y.setdata();
    y.print();

    z.addnumber(x,y);
    z.display();

    return 0;
}
