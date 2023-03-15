#include<iostream>
using namespace std;
class A{
int a,b;
public:
A(){
   cout << "Enter a and b: " << endl;
   cin >> a >> b;
}
void sum(){
    cout << "Sum: " << a+b;
}
};
int main(){
    A obj;
    obj.sum();
     return 0;
}
