#include<iostream>
using namespace std;
// Write a C++ program to check entered character is small, capital, digit or a special character.
int main(){
   
   char testCase;
   cout << "Enter yout test case: " << endl;
   cin >> testCase;
   if(testCase >=97 && testCase <=122){
    cout << "You have entered the small alphabet";
   }
   else if(testCase >=65 && testCase <=90){
    cout << "You have entered the capital alphabet";
   }
   else if(testCase >=47 && testCase <=57){
        cout << "You have entered a digit";
      }
   else{
    cout << "you have entered a special character";
   }
    return 0;
}
   
