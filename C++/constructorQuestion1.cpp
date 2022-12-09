#include<iostream>
using namespace std;

class student{
    private:
    string name;
public:
    student(string a){
        name = a;
    }
   student(){
    name = "UNKNOWN";
   }
   void printName(){
    cout << "The name is " << name;
}
};


int main(){
    student s1 = student("Riya");
    student s2 = student();
    s1.printName();
    s2.printName();

    return 0;
}
