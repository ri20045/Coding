#include<iostream>
using namespace std;
//Nested class;
class A{
    public:
    class B{
        int num;
        public:
        void setvalue(int x){
            num = x;
        }
        void print(){
            cout << "value of num: " << num;
        }
    };
};
int main(){
    A::B obj1;
    obj1.setvalue(10);
    obj1.print();

    return 0;
}
