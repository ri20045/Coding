#include<iostream>
using namespace std;

/*
Write a program to print the area of two rectangles having sides
(4,5) and (5,8) respectively by creating a class named 'Rectangle'
with a function named 'Area' which returns the area.
Length and breadth are passed as parameters
to its constructor.
*/



class Rectangle{
public:


   float area(float length, float breadth){
   
      float area = length * breadth;
   
      return area;
}

};

int main()
{
  
   Rectangle calculations;

  float area1 = calculations.area(4,5);
  float area2 = calculations.area(4,8);

  cout << "area1 " << area1 << endl;
  cout << "area2 " << area2;

   return 0;
}
