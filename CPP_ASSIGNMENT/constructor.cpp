#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
   Complex(){
     //constructor cannot have a return type;
        a=10;
        b=10;
    }
    void display(){
        cout << "Addition: " << a+b << endl;
    }
};
int main(){
    Complex c;
    c.display();
    return 0;
}
