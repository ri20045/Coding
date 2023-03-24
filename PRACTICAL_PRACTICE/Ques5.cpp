#include<iostream>
using namespace std;
// 5) Create a Calendar class with day, month and year as data members. 
// Include default and parameterized constructors to initialize a Calendar object with a valid date value. 
// Define a function AddDays to add days to the Calendar object. Define a display function to show data in "dd/mm/yyyy" format.

// Defining range
const int MIN_YEAR = 1800;
const int MAX_YEAR = 9999;

// days in month from january to february 
const int month_days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

// to check if the year is leap year 
bool isleapYear(int year){
    if(year % 400 == 0){
        return true;
    }
    else if(year % 100 == 0){
        return false;
    }
    else if(year % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}

class calender{
    int day,month,year;
    public:
    // Default constructor.
    calender(){
        day = 1;
        month = 1;
        year = 2000;
        display();
    }
    // Parameterised constructor.
    calender(int d, int m, int y){
        // validate year
        if(year<MIN_YEAR || year > MAX_YEAR){
            cout << "INVALID DATE" << endl;
            exit(0);
        }
        // validate month
        if(m < 1 || m > 12){
            cout << "INVALID DATE" << endl;
            exit(0);
        }
        bool ly = isleapYear(y);

        // validate leap year with month february;
        if(ly && m == 2 && day >29){
            cout << "INVALID DATE" << endl;
            exit(0);
        }
        else if(d < 1 && d > month_days[m-1]){
            cout << "INVALID DATE" << endl;
            exit(0);
        }
        // till here date is valudated

        day = d;
        month = m;
        year = y;
        display();
    }
    void AddDays(int d){
        bool ly = isleapYear(year);
        day += d; // add the value of d with days

        while(day >month_days[month - 1]){
            if(ly && month == 2){
                day -= 29;
                month++; // incremented to next month
            }
            else{
                day -= month_days[month - 1];
                month++;
            }
            if(month > 12){
                month %= 12;
                year++; // incremented to next year
                ly = isleapYear(year);
            }
        }
        cout << "Add: " << d << " days" << endl;
    }
    void display(){
        cout << "Date: ";
        if(day < 10){
            cout << "0" << day; 
        }
        else{
            cout << day;
        }
        if(month < 10){
            cout << "/0" << month;
        }
        else{
            cout << "/" << month;
        }

        cout << "/" << year << endl;
    }
};
int main(){
    calender c1; // invoke default contructor
    c1.AddDays(4);
    c1.display();
    return 0;
}
