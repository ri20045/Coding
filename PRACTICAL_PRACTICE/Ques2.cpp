#include<iostream>
using namespace std;
// 2) Create employee class include data member Empid, Name, Dep_name, Salary 
// use constructor with argument to assign values to data members. 
// Include necessary member functions for calculating salary and printing information.
class employee{
    int empid;
    string name;
    string dept_name;
    int salary;
    public:
    employee(int id, string n, string dept, int s){
        empid = id;
        name = n;
        dept_name = dept;
        salary = s;
    }
    int calculateSalary(int DA, int HRA){
        salary = (salary + DA + HRA);
        return salary;
    }
    void getinfo(){
        cout << "\nEmployee id: " << empid;
        cout << "\nName of an employee: " << name;
        cout << "\nDepartment name: " << dept_name;
        cout << "\nSalary of an Employee: " << salary;
    }
};
int main(){
    employee e(1001,"Riya Rawat","Psychology",300000);
    e.calculateSalary(2000,5000);
    e.getinfo();
    return 0;
}
