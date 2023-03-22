#include<iostream>
using namespace std;
// Write a C++ program to make inline function to find positive/negative number.
inline bool isPositive(int n){
    return (n>0);
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << endl;
    if(isPositive(num)){
        cout << num << " is positive";
    }
    else{
        cout << num << " is negative";
    }
    return 0;
}
