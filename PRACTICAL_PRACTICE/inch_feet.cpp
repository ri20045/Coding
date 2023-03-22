#include<iostream>
using namespace std;
// Write a program to pass object as an argument. The program adds the two heights given in feet and inches.
class maths{
    float feet,inch;
    public:
    maths(float f, float i){
        feet = f;
        inch = i;
    }
    void calculate(maths m){
        float result = m.feet + m.inch/12;
        cout << "Result in feet is: " << result << endl;
    }
};
int main(){
    maths m(2,4);
    m.calculate(m);
   return 0;
}
