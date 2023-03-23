#include<iostream>
using namespace std;
//Write a C++ program to calculate the area of circle, rectangle and square using function overloading.
double area(double radius) {
    return 3.14159 * radius * radius;
}

double area(double length, double width) {
    return length * width;
}

float area(float side) {
    return side * side;
}

int main(){
   double r, l, w;
   float s;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    cout << "Enter the length and width of the rectangle: ";
    cin >> l >> w;

    cout << "Enter the side of the square: ";
    cin >> s;

    cout << "The area of the circle is " << area(r) << endl;
    cout << "The area of the rectangle is " << area(l, w) << endl;
    cout << "The area of the square is " << area(s) << endl;

    return 0;
}
