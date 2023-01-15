#include<iostream>
using namespace std;
// C++ program to add two complex numbers by Pass and Return Object from the Function.
class complex{
    int real,imaginary;
    public:
    void getvalues(){
        cout << "\nEnter real number: "; cin >> real;
        cout << "\nEnter imaginary number: "; cin >> imaginary;
    }
    void print(){
        cout << "\nReal: " << real;
        cout << "\nImaginary: " << imaginary;
    }
    complex add(complex comp1,complex comp2){
        complex comp3;
        comp3.real = comp1.real + comp2.real;
        comp3.imaginary = comp1.imaginary + comp2.imaginary;
        return comp3;
    }
    void result(){
        cout << "\nResult: " << real << " + " << imaginary << "i" << endl;
    }

};
int main(){

    complex comp1,comp2,comp4;
    comp1.getvalues();
    comp1.print();

    comp2.getvalues();
    comp2.print();

    complex ans = comp4.add(comp1,comp2);
    ans.result();

    return 0;
}
