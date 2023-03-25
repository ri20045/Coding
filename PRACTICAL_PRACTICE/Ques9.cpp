#include<iostream>
using namespace std;
// 9) Write a C++ progaram to get any two values and find maximum number between them using template 
// ( Pass two integer numbers and double values)
template<typename T>
int maximum(T &n1, T &n2){
    return ((n1>n2)?n1:n2);
}
int main(){
    int a = 4,b = 5;
    cout << "Maximum number is: " << maximum(a,b);
    return 0;
}
