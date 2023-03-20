#include<iostream>
using namespace std;
// Create one class circle include pi, r variable and function area() which calculates area. 
// Make one object and access area using object. Also use functionality of constructor and destructor.

class circle{
    double r;
    public:
    circle(double rad){
        r = rad;
    }
    void area(){
        cout << "\nArea of circle: " << 3.14 * r * r;
    }
    ~circle(){
        cout << "Destructor called" << endl;
    }
};
int main(){
    circle c(2);
    c.area();
    return 0;
}
