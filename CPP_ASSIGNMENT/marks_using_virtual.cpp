#include<iostream>
using namespace std;

// Create a class student derive class commerce , arts, and science
// Enter three subjects marks in all derive classes and calculate total and percentage.

class Student{
    protected:
    int rollno;
    string name;
    public:
    void dispStudent(int rollno,string name){
        cout << "\nRoll No.: " << rollno;cout << "\nName of Student: " << name;
    }
};
class Commerce:virtual public Student{
    protected:
    float commerce_marks;
    public:
    void dispA(){
        commerce_marks=95;
    }
    void dispmarks(){
        cout << "\nMarks in Commerce: " << commerce_marks;
    }
};
class Arts:virtual public Student,public Commerce{
    protected:
    float arts_marks;
    public:
    void dispB(){
        arts_marks=95;
    }
    void disparts(){
        cout << "\nMarks in arts: " << arts_marks;
    }
};
class Science:virtual public Student,public Arts{
    float science_marks;
    float total;
    float percentage;
    public:
    void dispC(){
        science_marks=95.67;
    }
    void dispscience(){
        cout << "\nMarks in science: " << science_marks;
    }
    void calculation(){
        total=commerce_marks+arts_marks+science_marks;
        cout << "\nTotal marks: " << total;
        percentage=total/3;
        cout << "\nPercentage: " << percentage;
    }
};
int main(){
   Science s;
   s.dispStudent(59,"Riya");
   s.dispA();
   s.dispmarks();
   s.dispB();
   s.disparts();
   s.dispC();
   s.dispscience();
   s.calculation();
    return 0;
}
