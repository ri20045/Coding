#include<iostream>
using namespace std;
class calculate{
    public:
void area(int length, int breadth){
    int area = length * breadth;
    cout << "area of rectangle = " << area << endl;
}
void area(int side){
    int area = side * side;
    cout << "area of square = " << area;
}
};
int main(){
    calculate areas;
    areas.area(3,6);
    areas.area(5);
    
    return 0;
}
