#include<iostream>
using namespace std;

class student{
private:    
    //properties
    string name;
    int rollNo ;

public:
    void printProperties(){
        cout << "Name is:" << name << endl;
        cout << "Roll No. is:" << rollNo << endl;
    }

    void setName(string str){
        name = str;
    }

    void setRollNo(int number){
        rollNo = number;
    }

    int getRollNo(){
        return rollNo;
    }

    string getName(){
        return name;
    }
};

int main(){

    //object1
    student one;
    one.setName("Riya");
    one.setRollNo(1);
    // one.getRollNo();
    // one.getName();
    cout << "roll no.:" << one.getRollNo() << endl;
    // one.printProperties();

    // object2
    student two;
    two.setName("Cera");
    two.setRollNo(2);
    two.printProperties();
    
    return 0;
}
