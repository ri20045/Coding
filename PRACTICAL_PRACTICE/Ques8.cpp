#include<iostream>
using namespace std;
// 8) Write a C++ program to Swap two values using template
template<typename T>
void Swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 5, b = 7;
    cout << "\nBefore swapping: " << a << " " << b;
    Swap(a,b);
    cout << "\nAfter Swapping: " << a << " " << b;
    return 0;
}
