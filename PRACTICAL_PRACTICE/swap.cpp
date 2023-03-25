#include<iostream>
using namespace std;
// 9) Write a C++ progaram to get any two values and find maximum number between them using template 
// ( Pass two integer numbers and double values)
template<typename T>
double maximum(T &n1, T &n2){
    return ((n1>n2)?n1:n2);
}
int main(){
    int a = 2,b = 5;
    double x = 2.3, y = 6.7;
    cout << "Maximum number is: " << maximum(a,b);
    cout << "Maximum number is: " << maximum(x,y);
    return 0;
}
