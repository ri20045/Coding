#include<iostream>
using namespace std;
//Write program for finding the largest value among them.
template<typename T>
T large(T n1, T n2){
    return (n1>n2)? n1 : n2;
}
int main(){
    int i1,i2;
    float f1,f2;
    char c1,c2;
    cout << "\nEnter integer values: ";
    cin >> i1 >> i2;
    cout << "\n" << large(i1,i2) << " is larger";
    cout << "\nEnter float values: ";
    cin >> f1 >> f2;
    cout << "\n" << large(f1,f2) << " is larger";
    cout << "\nEnter character values: ";
    cin >> c1 >> c2;
    cout << "\n" << large(c1,c2) << " has larger ASCII value";
    return 0;
}
