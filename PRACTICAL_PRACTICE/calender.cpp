#include<iostream>
using namespace std;
// Create a Calendar class with day, month and year as data members. 
// Include default and parameterised constructors to initialise a Calendar object with a valid date value. 
// Define function AddDays to add days to the calender object. Define a display function to show data in "dd/mm/yyyy" format.

class calender{
    int day;
    int month;
    int year;
    public:
    calender(int d,int m,int y){
        day = d;
        month = m;
        year = y;
    }
    int AddDays(int add_days){
        day = day + add_days;
        return day;
    }
    void display(){
        cout << day << "/" << month << "/" << year;
    }
};
int main(){
    calender c(2,4,2023);
    c.AddDays(4);
    c.display();
  
    return 0;
}
