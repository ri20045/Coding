#include<iostream>
using namespace std;

class student{

public:
    //properties

    string Name;
    int rollNo;
};

int main(){

    //object1
    student one;
    one.Name = "Riya";
    one.rollNo = 1;

    // object2
    student two;
    two.Name = "Cera";
    two.rollNo = 2;

    cout << "Name is:" << one.Name << endl;
    cout << "Roll No. is:" << one.rollNo << endl;

    cout << "Name is:" << two.Name << endl;
    cout << "Roll No. is:" << two.rollNo << endl;
    return 0;
}
