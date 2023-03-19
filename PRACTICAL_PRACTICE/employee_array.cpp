#include<iostream>
using namespace std;
// Create a class employee with name, salary, age as member, use get_data() and show() functions. 
// Display details of 3 manager employees.

class employee{
    string name;
    int age;
    int salary;
    public:
    void get_data(string n,int a,int s){
        name = n;
        age = a;
        salary = s;
    }
    void show(){
        cout << "\nName: " << name;
        cout << "\nage: " << age;
        cout << "\nsalary: " << salary;
    }
};
int main(){
   employee e;
   string n;
   int a,s;
   int arr[3];
   for(int i=0;i<3;i++){
    cout << "\nEnter name: ";
    cin >> n; 
    cout << "\nEnter age: ";
    cin >> a;
    cout << "\nEnter salary: ";
    cin >> s;
    e.get_data(n,a,s);
    e.show();
} 
    return 0;
}
