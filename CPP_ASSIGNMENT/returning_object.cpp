#include<iostream>
using namespace std;
// Define class Time with members hour, minute and second. 
// Also define function to getTime() to initialize the members, printTime() 
// to display time and addTime() to add two time objects. Demonstrate class Time.
// 1. Passing object as argument 
// 2. Returning object

class Time{

    int hour,minute,second;
    public:
    void getTime(){
        cout << "\nenter hour: \n";
        cin >> hour;
        cout << "enter minutes: \n";
        cin >> minute;
        cout << "enter seconds: \n";
        cin >> second;
    }
    void printTime(){
        cout << "\nHour: " << hour;
        cout << "\nMinutes: " << minute;
        cout << "\nSeconds: " << second;
    }
    Time addTime(Time t1, Time t2){
        Time t3;
        t3.hour = t1.hour + t2.hour;
        t3.minute = t1.minute + t2.minute;
        t3.second = t1.second + t2.second;
        return t3;
    }
};
int main(){

    Time t1,t2,t4;
    t1.getTime();
    t1.printTime();

    t2.getTime();
    t2.printTime();

    Time ans = t4.addTime(t1,t2);
    ans.printTime();
    return 0;
}
