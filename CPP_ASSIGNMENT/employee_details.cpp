#include<iostream>
using namespace std;

class employee{
    int age,salary;
    string name;
    public:
    void getdata(int a,int b,string c){
        age = a;
        salary = b;
        name = c;
    }
    void showdata(){
        cout << age << " " << salary << " " << name << endl;
    }
};
int main(){

employee e1;
e1.getdata(34,400000,"hehe");
e1.showdata();

employee e2;
e2.getdata(44,500000,"gfhg");
e2.showdata();

employee e3;
e3.getdata(55,600000,"hfhfg");
e3.showdata();

return 0;
}
