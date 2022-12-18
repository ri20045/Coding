#include <iostream>
using namespace std;
//Write a C++ Program to find the total days in the year till date.
bool isLeapYear(int year) {
    if (year % 400 == 0)
        return true;
 
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

int main() {
int day, month, year;
cout << "enter the day: ";
cin >> day;
cout << "Enter the month: ";
cin >> month;
cout << "Enter the year: ";
cin >> year;
int daysInEachMonth[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int result = 0;
for(int i = 1;i < month;i++) {
result += daysInEachMonth[i];
}

result += day;
if(isLeapYear(year) && month > 2) result ++;

cout << result;
return 0;
}


