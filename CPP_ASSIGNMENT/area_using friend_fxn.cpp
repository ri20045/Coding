#include<iostream>
using namespace std;
//find area of rectangle and square using friend function of one class and member function to another class;
class square;
class rectangle{
    int height,width;
    public:
    void setvalues(int x, int y){
        height = x;
        width = y;
    }
    friend void calculate(rectangle , square);
};
class square{
    int side;
    public:
    void setvalues(int x){
        side = x;
    }
    friend void calculate(rectangle , square);
};
void calculate(rectangle r, square s){
    cout << "Rectangle: " << r.height * r.width;
    cout << "Square: " << s.side * s.side;
}

int main(){
  rectangle r;
  square s;
  r.setvalues(2,3);
  s.setvalues(2);
  calculate(r,s);

    return 0;
}
