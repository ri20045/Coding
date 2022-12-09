#include<iostream>
using namespace std;
class complex{
   int a,b;
public:
   complex(void);
      void printNumber()
      {
         cout << "Your Number is " << a << "+" << b << "i" << endl;  
      }
 
};

complex :: complex(void){
   a=10;
   b=0;
}
int main(){

complex c;
c.printNumber();

   return 0;
}

