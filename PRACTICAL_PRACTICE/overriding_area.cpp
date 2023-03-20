#include<iostream>
using namespace std;
// Write a c++ program(using function overriding)to calculate area of circle,rectangle and square. 
// Use necessary functions to take values from user.

class circle{
    double r;
    public:
    void getCircle(double rad){
        r = rad;
    }
    double area(){
        return 3.14 * r * r;
    }
};

class rectangle{
    double l,b;
    public:
    void getRectangle(double le, double be){
        l = le;
        b = be;
    }
    double area(){
        return l * b;
    }
};

class square: public circle,public rectangle{
    double s;
    public:
    void getsquare(double si){
        s = si;
    }
    double area(){
        return s * s;
    }
};
int main(){
    square r;
    r.getRectangle(2,2);
    cout << "\nArea of Rectangle: " << r.rectangle::area();
    r.getCircle(1);
    cout << "\nArea of circle: " << r.circle::area();
    r.getsquare(2);
    cout << "\nArea of square: " << r.area();

    return 0;
}
