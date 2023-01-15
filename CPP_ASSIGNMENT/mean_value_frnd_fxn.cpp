#include<iostream>
using namespace std;
//Calculate mean value of two user input values;

class mean{
    int num1,num2;
    public:
    void setvalues(int x,int y){
        num1 = x;
        num2 = y;
    }
    friend int CalculateMean(mean m);
};
int CalculateMean(mean m){
    return ((m.num1 + m.num2)/2);
}

int main(){
   
   mean m1;
   int x,y;
   cout << "\nEnter num1: ";
   cin >> x;
   cout << "\nEnter num2: ";
   cin >> y;
   m1.setvalues(x,y);
   cout << "\nMean value: " << CalculateMean(m1);
    return 0;
}
