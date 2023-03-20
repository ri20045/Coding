#include<iostream>
using namespace std;
// Create employee class include data member Empid, name, Dept_name, Salary. 
// Use constructor with argument to assign values to data members. 
// Include necessary member functions for calculating salary and printing information. 
// Salary = HRA + DA. 

class Employee{
    int Empid;
    string name;
    string Dept_name;
    double salary;
    public:
    Employee(int a,string b,string c,double d){
        Empid = a;
        name = b;
        Dept_name = c;
        salary = d;
    }
    double calculate(double HRA, double DA){
        salary = salary + HRA + DA;
        return salary;
    }
    void display(){
        cout << "\nEmpId: " << Empid;
        cout << "\nName of an employee: " << name;
        cout << "\nname of department: " << Dept_name;
        cout << "\nSalary: " << salary;
    }
};
int main(){
    Employee e(1001,"Riya Rawat","Programming",50000);
    e.calculate(5000,10000);
    e.display();
    return 0;
}
