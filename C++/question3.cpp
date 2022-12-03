#include<iostream>
using namespace std;

/*
Write a program to print the area of a rectangle by creating a class
named 'Area' having two functions. First function named as 'setDim'
takes the length and breadth of the rectangle as parameters and the
second function named as 'getArea' returns the area of the rectangle.
 Length and breadth of the rectangle are entered through keyboard.
*/


class Area{
private:
   float length, breadth;

public:

   void setDim(float a, float b){
      length = a;
      breadth = b;
   }

   float getArea(){
      
      return length * breadth;
   }

};

int main()
{
  
  Area calculations;
  float a,b;
  cin >> a >> b;
  calculations.setDim(a,b);
  float result = calculations.getArea();

  cout << "result " << result;

   return 0;
}
