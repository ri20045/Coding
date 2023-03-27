#include <iostream>
using namespace std;
// 7) Write a C++ program to perform addition of two object variable into third object and return the same.
class A{
    int a;
    public:
    void setvalues(int num1){
        a = num1;
    }
    A addition(A a1, A a2){
        A a3;
        a3.a = a1.a + a2.a;
        return a3;
    }
    void display(){
        cout << "Answer is: " << a; 
    }
};
int main(){
    A a1, a2, a4;
    a1.setvalues(3);
    a2.setvalues(4);
    a4 = a4.addition(a1,a2);
    a4.display();
    return 0;
}
