#include<iostream>
using namespace std;

/*Write a program to print
the area and perimeter of a triangle having
sides of 3, 4 and 5 units by creating a class
named 'Triangle' with a function to print the area and perimeter*/



class Triangle{
public:

   float a,b,c;
   
   void area(){
   float areaOfTriangle = a * b/2; 
   cout << "area" << "=" << areaOfTriangle << "\n";
}

void perimeter(){
   float perimeterOfTriangle = a + b + c;
   cout << "perimeter" << "=" << perimeterOfTriangle;
}

};

int main()
{
   
   Triangle calculations;
   calculations.a = 3;
   calculations.b = 4;
   calculations.c = 5;

   calculations.area();
   calculations.perimeter();
   
  
   return 0;
}
