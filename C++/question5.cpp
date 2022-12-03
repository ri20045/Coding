#include<iostream>
using namespace std;

// Print the average of three numbers entered by the user by creating
// a class named 'Average' having a function to calculate and print
// the average without creating any object of the Average class.

class Average{

public:
   static void calculateAverage(int a, int b, int c){
      int average = (a + b + c)/3;
      cout << "average = " << average;
   }

};

int main()
{
   int a,b,c;
   cin >> a >> b >> c;
   Average::calculateAverage(a, b, c);
   return 0;
}
