#include<iostream>
using namespace std;
// 3) Create one class circle include pi, r variable and Function area() which calculates area.
// Make one object and access area using object. Also use functionality of constructor and
// destructor.
class circle{
    double pi;
    double r;
    public:
    circle(double p, double radius){
        pi = p;
        r = radius;
    }
    double area(){
        double areaOfCircle = pi * r * r;
        return areaOfCircle;
    }
    ~circle(){
        cout << "\nDestructor called";
    }
};
int main(){
    circle c1(3.14,1.0);
    cout << "Area of circle: " << c1.area();
    return 0;
}
