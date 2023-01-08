#include<iostream>
// Create class employeee with data variables name, id , department, salary and 
// display the information using class and objects;
using namespace std;
class Employee{

    int id;
    string name;
    string department;
    int salary;

    public:
    void setinfo(int x,string y,string z,int k){

        id = x;
        name = y;
        department = z;
        salary = k;
        
    }
    void display(){
       
    cout << "\nId is: " << id;
    cout << "\nName is: " << name;
    cout << "\nDepartment is: " << department;
    cout << "\nSalary is: " << salary;
    }

};


int main(){
    Employee emp;
    int x;
    string y;
    string z;
    int k;
    for(int i=1;i<=10;i++){
        cout << "Enter id: \n";
        cin >> x;
        cout << "Enter name: \n";
        cin >> y;
        cout << "Enter department: \n";
        cin >> z;
        cout << "Enter salary: \n";
        cin >> k;
        emp.setinfo(x,y,z,k);
        emp.display();
    }
   
    return 0;
    
}
