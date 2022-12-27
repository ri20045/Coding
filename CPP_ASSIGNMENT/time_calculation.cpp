#include<iostream>
using namespace std;
// create class time and take hours and minute as variables.
//store variables in T1 and T2 and store the addes value is T3 object.
//pass object as function argument.

class Time{
    int h,m;
    public:
    void getdata(){
        cout << "Enter hours: " << endl; 
        cin >> h;
        cout << "Enter minutes: ";
        cin >> m;
    }
    void putdata(){
        cout << "Hours: " << h << endl;
        cout << " Minutes: " << m;
    }
    void totaltime(){
        cout << "Total time: " << h << " " << m << endl;
    }
    void sum(Time T1, Time T2){
        h = (T1.m +T2.m) / 60;
        m = (T1.m +T2.m) % 60;
        h = h + (T1.h + T2.h);
    }


};

int main(){
    Time T1, T2, T3;
    T1.getdata();
    T2.getdata();
    T1.putdata();
    T2.putdata();
    T3.sum(T1,T2);
    T3.totaltime();

    return 0;
}

