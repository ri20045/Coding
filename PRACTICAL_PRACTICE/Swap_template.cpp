#include<iostream>
using namespace std;
// Write program for swapping two values of two different data type with use of function template.

template<typename T>
void Swap(T &n1,T &n2){
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main(){

    int i1=1,i2=2;
    float f1=2.1,f2=2.2;
    cout << "Before swap: \n";
    cout << "i1: " << i1 << " " << "i2: " << i2;
    cout << "f1: " << f1 << " " << "f2: " << f2;

    Swap(i1,i2);
    Swap(f1,f2);

    cout << "After swap: \n";
    cout << "i1: " << i1 << " " << "i2: " << i2;
    cout << "f1: " << f1 << " " << "f2: " << f2;

    return 0;
}
