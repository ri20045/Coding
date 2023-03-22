#include<iostream>
using namespace std;
// Write a C++ program to make inline function to find odd/even.
inline bool isEven(int n){
    return (n%2 == 0);
}
int main() {
  int num;
  cout << "Enter the number: ";
  cin >> num;
  if(isEven(num)){
    cout << num << " is even" << endl;
  }
  else{
    cout << num << " is odd" << endl;
  }
    return 0;
}
