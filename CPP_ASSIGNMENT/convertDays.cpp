#include<iostream>
using namespace std;
// Write a C++ Program to convert days into years and weeks and months left.
int main(){
    int noOfDays;
    cout << "Enter the number of days: ";
    cin >> noOfDays;
    int years = noOfDays / 365;
    int daysLeft = noOfDays % 365;
    int months = daysLeft / 30;
    daysLeft = daysLeft % 30;
    int weeks = daysLeft / 7;
    daysLeft = daysLeft % 7;

    cout << "years: " << years << " months: " << months << " weeks: " << weeks << " days: " << daysLeft;
    return 0;
}
   
