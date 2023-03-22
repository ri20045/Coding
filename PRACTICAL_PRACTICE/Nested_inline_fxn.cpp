#include<iostream>
using namespace std;
// Create a program that illustrates the use of nested classes.
// Define a class Teacher with the following specification: Private members:
// Name : 20 char 
// Subject: 10 char 
// Basic, DA,HRA : float 
// Salary: float
// Calculate() inline function computes the salary and returns it. Salary is sum of basic, DA and HRA 
// Public member: Readdata() function accept the data values and invoke the calculate function

class A{
    public:
    class Teacher{
        private:
        string name;
        string subject;
        float basic,HRA,DA;
        public:
        void setdata(string n,string sub,float b,float h,float d){
                name = n;
                subject = sub;
                basic = b;
                HRA = h;
                DA = d;
            }
        inline int calculate(){
            return  basic + HRA + DA;;
        }
        void Readdata(){
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Basic salary: " << basic << endl;
            cout << "HRA: " << HRA << endl;
            cout << "DA: " << DA << endl;
            cout << "salary: " << calculate() << endl;
        }
    };
};
int main(){
    A::Teacher obj;
    obj.setdata("Riya Rawat","Computer Science",5000,2000,1000);
    obj.calculate();
    obj.Readdata();
    return 0;
}
