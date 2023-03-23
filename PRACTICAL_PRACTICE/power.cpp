#include<iostream>
using namespace std;
// Create a function power() to raise a number m to power n. 
// the function takes a double value for m and int value for n, and returns the result correctly. 
// Use the default value of 2 for n to make the function calculate squares when this argument is omitted. 
// Write a main that gets the values of m and n from the user to test the function.
double power(double m,int n=2){
    double result = 1.0;
    for(int i=1;i<=n;i++){
        result = result * m;
    }
    return result;
}
int main(){
    double m;
    int n;
    cout << "\nEnter the number: ";
    cin >> m;
    cout << "\nEnter the power: ";
    cin >> n;

    double result = power(m,n);
    cout << m << " raised to the power " << n << " is " << result << endl;
    return 0;
}
