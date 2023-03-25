#include <iostream>
using namespace std;
// 7) Write a C++ program to perform addition of two object variable into third object and return the same.
class addition{
    int a,b;
    public:
    void setvalues(int x, int y){
        a = x;
        b = y;
    }
    friend addition calculate(addition a1, addition a2);
    
    void display(){
        cout << "\nResult" << a + b;
    }
};
addition calculate(addition a1, addition a2){
    addition a3;
    a3.a = a1.a + a2.a;
    a3.b = a1.b + a2.b;
    return a3; 
}
int main(){
    addition a1,a2,a4;
    a1.setvalues(2,3);
    a2.setvalues(4,5);
    a4 = calculate(a1,a2);
    a4.display();
    return 0;
}
