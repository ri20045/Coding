#include<iostream>
using namespace std;
// Create two classes DM and DB which store the value of distances. 
// DM stores distances in meters and centimetres and DB in feet and inches. 
// Write a program that can read values for the class objects and add one object of DM with another object of DB. 
// Use friend function to carry out the addition operation. 
// The object that stores the results may be a DM object or DB object, depending on the units in which the results are required

class DB;
class DM{
    int m,cm;
    public:
    void getDM(){
        cout << "\nEnter values in meters and centimeters:" << endl;
        cout << "\nEnter value in meters: ";
        cin >> m;
        cout << "\nEnter value in centimeters: ";
        cin >> cm;
    }
    friend float sum(DM a,DB b);
};
class DB{
    int ft,in;
    public:
    void getDB(){
        cout << "\nEnter values in feet and inches:" << endl;
        cout << "\nEnter value in feet: ";
        cin >> ft;
        cout << "\nEnter value in inches: ";
        cin >> in;
    }
    friend float sum(DM a,DB b);
};

float sum(DM a,DB b){
    float x,y,z;
    x = a.m+(a.cm/100);
    y = b.ft+(b.in/12);
    z = x+(y*0.304);
    return z;
};
int main(){
    DM a;
    DB b;
    a.getDM();
    b.getDB();
    cout << "\n Final result: " << sum(a,b);
    return 0;
}
