#include<iostream>
// Write a C++ program to find the area and perimeter of rectangle
using namespace std;
void area(int length ,int breadth){
   int areaOfRectangle = length * breadth;
   cout << areaOfRectangle << endl;
}
void perimeter(int length ,int breadth){
    int perimeterOfRectangle = 2*(length + breadth);
    cout << perimeterOfRectangle;
}
int main(){
    area(2,4);
    perimeter(5,1);

    return 0;
}
