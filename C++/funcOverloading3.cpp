#include<iostream>
using namespace std;

class Student{

    string name;
    int age;
    string address;
    public:
    Student(){
        name = "UNKNOWN";
        age = 0;
        address = "not available";
    }
  
    void setInfo(string nam, int ag){
        name = nam;
        age = ag;
    }
    void setInfo(string nam, int ag, string addy){
        name = nam;
        age = ag;
        address = addy;
    }
    void printInfo(){
        cout << name << "\t" << age  << "\t" << address << endl;
    }
};
int main(){
    string name;
    int age;
    string address;
    Student arr[10];
    for(int i=0;i<10;i++){
        cin >> name >> age >> address;
         arr[i] = Student();
         arr[i].setInfo(name, age, address);
       
    }
    for(int i=0;i<10;i++){
        arr[i].printInfo();
    }
    
    return 0;
}
