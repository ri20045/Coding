#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    int area;
    public:
    Rectangle(){
        length = 0;
        breadth = 0;
    }
    Rectangle(int a, int b){
        length = a;
        breadth = b;
    }
    Rectangle(int a){
        length = a;
        breadth = a;
    }
    void calculate(){
        int area = length * breadth;
        cout << "area = " << area << endl;
    }
};
int main(){
    Rectangle Rectangle1 = Rectangle();
    Rectangle Rectangle2 = Rectangle(4,5);
    Rectangle Rectangle3 = Rectangle(4);

    Rectangle1.calculate();
    Rectangle2.calculate();
    Rectangle3.calculate();
   
    return 0;
}
