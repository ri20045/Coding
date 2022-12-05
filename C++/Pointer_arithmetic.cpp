#include<iostream>
using namespace std;

// pointers

int main()
{
   int a = 10;
   int *p;
   p = &a;
   // Pointer arithmetic
   cout << "size of integer = " << sizeof(int) << endl;
   cout << "address at p = " << p << endl;
   cout << "address at p = " << p+1 << endl; // will be 4+ of p as size of integer is 4bytes;
   cout << "value at p = " << *p << endl;
   cout << "value at p+1 = " << *(p+1); // no value allocated to this memory address, therefore garbage value will be reflected; 
   return 0;
}

