#include<iostream>
using namespace std;
// 1 foot = 12 inches.
//1 inch = 1/12 foot.
// Write a program to pass object as an argument. 
// The program adds the two heights given in feet and inches.
class measurement{
int feet, inches;
public:
void getdata(){
    cout << "Enter in feets: ";
    cin >> feet;
    cout << "\nEnter in inches: ";
    cin >> inches;
}
void setdata(){
    cout << "feet: " << feet << endl;
    cout << "Inches: " << inches << endl;
}
void calculate(measurement m1, measurement m2){
    feet = (m1.inches + m2.inches) / 12;
    inches = (m1.inches + m2.inches) % 12;
    feet = feet + (m1.feet + m2.feet);
}
void putdata(){
    cout << "Final answer " << feet << " feet " << inches << " inches";
}

};

int main(){

measurement m1, m2 , m3;
m1.getdata();
m2.getdata();

m1.setdata();
m2.setdata();

m3.calculate(m1,m2);
m3.putdata();
return 0;
}
