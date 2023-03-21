#include<iostream>
using namespace std;
// Create a class paper with width and height as data member.
// Create a function outside a class that finds out area and perimeter of that paper pass object as argument.
class paper{
    int height;
    int width;
    public:
    paper(int h, int w){
        height = h;
        width = w;
    }
    friend void calculate(paper p);
};
void calculate(paper p){
    int area = p.width * p.height;
    int perimeter = 2 * (p.height + p.width);
    cout << "Area of paper: " << area << endl;
    cout << "Perimeter of paper: " << perimeter << endl;
}
int main(){
    paper p(1,2);
    calculate(p);
   return 0;
}
