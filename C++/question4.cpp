#include<iostream>
using namespace std;

// Write a program to print the area of a rectangle by creating a 
// class named 'Area' taking the values of its length and breadth as 
// parameters of its constructor and having a function named 
// 'returnArea' which returns the area of the rectangle. Length and 
// breadth of the rectangle are entered through keyboard.

class Area{
private:
   int length;
   int breadth;

public:
   Area(float l, float b) {
      length = l;
      breadth = b;
   }

   float returnArea() {
      return length * breadth;
   }
};

int main()
{
   int l, b;
   cin >> l >> b;

   Area area1 = Area(l, b);
   float area = area1.returnArea();
   cout << area;
   return 0;
}
