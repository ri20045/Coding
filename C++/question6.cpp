#include<iostream>
using namespace std;

// Write a program that would print the information
//  (name, year of joining, salary, address) of three employees by
//   creating a class named 'Employee'. The output should be as follows:

// Name        Year of joining        Address
// Robert        1994        64C- WallsStreat
// Sam        2000        68D- WallsStreat
// John        1999        26B- WallsStreat

class Employee{

public:

   string Name;
   string YearOfJoining;
   string Address;

};

int main()
{
   Employee object1;

   object1.Name = "Robert";
   object1.YearOfJoining = "1994";
   object1.Address = "64C- WallsStreat";

   Employee object2;

   object2.Name = "Sam";
   object2.YearOfJoining = "2000";
   object2.Address = "68D- WallsStreat";

   Employee object3;

   object3.Name = "John";
   object3.YearOfJoining = "1999";
   object3.Address = "26B- WallsStreat";

   cout << "Name  " << "YearOfJoining  " << "Address" << endl;

   cout << object1.Name << "  " << object1.YearOfJoining << "  " << object1.Address << endl;
   cout << object2.Name << "  " << object2.YearOfJoining << "  " << object2.Address << endl;
   cout << object3.Name << "  " << object3.YearOfJoining << "  " << object3.Address << endl;

   return 0;
}
