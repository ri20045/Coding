#include<iostream>
using namespace std;
// Write a program to perform addition of two object variable into third object and return the same
class sum{
    int a,b;
    public:
    void setvalues(int n1,int n2){
        a = n1;
        b = n2;
    }
    friend sum addition(sum s1, sum s2);
    void answer(){
        cout << "result: " << a+b;
    }
};
    sum addition(sum s1, sum s2){
        sum s3;
        s3.setvalues((s1.a+s2.a),(s1.b+s2.b));
        return s3;
    }
    

int main(){
    sum x,y,result;
    x.setvalues(1,2);
    y.setvalues(3,4);
    result = addition(x,y);
    result.answer();
    return 0;
}
