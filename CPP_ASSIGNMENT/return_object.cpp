#include<iostream>
using namespace std;
//Write a program to perform addition of two object variable into third object and return the same
class sum{
    int a,b;
    public:
    void getnumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    void setnumber(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    friend sum addition(sum o1, sum o2);
    void answer(){
        cout << "Result = " << a + b << endl;
    }
};
sum addition(sum o1, sum o2){
    sum o3;
    o3.getnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main(){

    sum x,y,result;
    x.getnumber(1,4);
    x.setnumber();

    y.getnumber(2,4);
    y.setnumber();

    result = addition(x,y);
    result.answer();

    return 0;
}
