#include<iostream>
using namespace std;

// parent class
class doctor{

public:
   void cut(){
      cout << "i cut brain \n";
   }

   void examine(){
      cout << "I examine patients \n";
   }
};

// child class
class surgeon: public doctor{

public:
   void surgery(){
      cout << "i did a surgery \n";
   }

};
int main()
{

   surgeon surgeon1;

   // accessed from parent class
   surgeon1.cut();
   // accessed from child class
   surgeon1.examine();
   surgeon1.surgery();

   return 0;
}

