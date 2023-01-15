#include<iostream>
using namespace std;
//addition using friend function;

class add{

    int num1,num2;
    public:
    void setdata(int x,int y){
        num1 = x;
        num2 = y;
    }
    friend int calculate(add n);
};
int calculate(add n){
    return (n.num1+n.num2);
}

int main(){

    add n1;
    n1.setdata(10,20);
    cout << "Sum: " << calculate(n1);
    
    return 0;
}
