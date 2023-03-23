#include<iostream>
using namespace std;
// 1) Write a C++ program to create two classes. Manager and scientist. 
// Create common function which helps to calculate sum of their salary.
class Scientist;
class Manager{
    int salary;
    public:
    void setsalary(int s){
        salary = s;
    }
    float getsalary(){
        return salary;
    }
    friend int calculate(Manager m,Scientist s);
};
class Scientist{
    int salary;
    public:
    void setsalary(int s){
        salary = s;
    }
    float getsalary(){
        return salary;
    }
    friend int calculate(Manager m,Scientist s);
};
int calculate(Manager m, Scientist s){
    return (m.getsalary() + s.getsalary());
}
int main(){
   Manager m;
   Scientist s;
   m.setsalary(50000);
   s.setsalary(50000);

   cout << "Total salary is: " << calculate(m,s);
    return 0;
}
