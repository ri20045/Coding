#include<iostream>
using namespace std;

// pointers

int main()
{
   int a = 10;
   int b = 40;
   int *p = &a;
   cout << "a = " << a << endl;
   // p = &a; &a = address of a;
   cout << "p " << p << endl; // will print address of a;
   *p = 30; // dereferencing;
   cout << "a = " << *p << endl;
   *p = b; // assign value of b to integer a;
   cout << "a = " << *p;
   return 0;
}

