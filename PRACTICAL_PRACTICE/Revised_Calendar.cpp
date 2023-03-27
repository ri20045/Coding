#include<iostream>
using namespace std;
// 5) Create a Calendar class with day, month and year as data members. 
// Include default and parameterized constructors to initialize a Calendar object with a valid date value. 
// Define a function AddDays to add days to the Calendar object. Define a display function to show data in "dd/mm/yyyy" format.

//Define range
const int MIN_YEAR = 1800;
const int MAX_YEAR = 9999;

//Days in months from Jan-Dec
const int DaysInEachMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; 

bool isLeapYear(int year){
    if(year % 400 == 0)
        return true;
    if(year % 100 == 0)
        return false;
    if(year % 4 == 0)
    return true;
    return false;
}
class Calendar{
    int day, month, year;
    public:
    //default constructor
    Calendar(){
        day = 1;
        month = 1;
        year = 2000;
        display();
    }
    //parameterised constructor
    Calendar(int d, int m, int y){
        //Year validation
        if(y < MIN_YEAR || y > MAX_YEAR){
            cout << "\nINAVLID DATE\n" << endl;
            exit(0);
        }
        //Month validation
        if(m < 1 || m > 12){
            cout << "\nINAVLID DATE\n" << endl;
            exit(0);
        }
        bool ly = isLeapYear(y);

        //validate year which is a leap year with month feb
        if(ly && m == 2 && day > 29){
            cout << "\nINAVLID DATE\n" << endl;
            exit(0);
        }
        else if(d < 1 || d > DaysInEachMonth[m - 1]){
            cout << "\nINAVLID DATE\n" << endl;
            exit(0);
        }  
        //till here date is validated

        day = d;
        month = m;
        year = y;
        display();
   }

    void AddDays(int d){
        bool ly = isLeapYear(year);
        day += d; //adding days to data memeber day.
        while(day > DaysInEachMonth[month - 1]){
            if(ly && month == 2)
                day -= 29;
            else
                day -= DaysInEachMonth[month - 1];
                month++;
                if(month > 12){
                    month %= 12;
                    year++; //incremented to next year
                    ly = isLeapYear(year);
                }
        }
        cout << "Add " << d << " days" << endl;
    }

    void display(){
        cout << "Date: ";
        if(day < 10)
            cout << "0" << day;
        else
            cout << day;
            if(month < 10)
                cout << "/0" << month;
            else
                cout << "/" << month;
                cout << "/" << year << endl;
    }
};
int main(){
    Calendar c1(1,5,2001);
    c1.AddDays(400);
    c1.display();
    return 0;
}
