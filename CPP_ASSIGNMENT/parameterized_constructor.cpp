#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
   Complex(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout << "Addition: " << a+b << endl;
    }
};
int main(){
    Complex c(10,10);
    c.display();
    return 0;
}
