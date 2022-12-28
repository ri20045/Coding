#include<iostream>
using namespace std;
// create a class paper with width and height as data member.
// Create a function outside a class that finds out area and perimeter
// of that paper pass object as argument.

class Paper{

    int height , width;
   
public:

    void setHeight(int h) {
    height = h;
    }
   
    void setwidth(int w) {
    weight = w;
    }
   
    int getHeight() {
    return height;
    }
   
    int getwidth() {
    return weight;
    }
};

int calculateArea(Paper p) {
return p.getHeight() * p.getwidth();
}
int calculatePerimeter(Paper p){
    return 2 * (p.getHeight() + p.getwidth());
}

int main(){
Paper p1;
p1.setHeight(5);
p1.setwidth(6);
int area = calculateArea(p1);
int perimeter = calculatePerimeter(p1);
cout << "area: " << area << "\n";
cout << "perimeter: " << perimeter;
    return 0;
}
