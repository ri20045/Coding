#include<iostream>
#include<cmath>
using namespace std;
float f(float x){
      return pow(x,3)-(2*x)-5;
}
float differentiate(float x){
     return 3*x*x - 2;
}
int main(){
     int maxIteration,i;
     //x1-first interval, x2=second interval, x0=initial value(b/w x1 and x2), x=root
     float x1,x2,x0,x,epsilon;
     cout << "Enter number of iterations: "; cin >> maxIteration;
     cout << "Enter epsilon: ";cin >> epsilon;
     // cout << "x0= ";cin >> x0;
     // compute x1 and x2
     do{
          cout << "Enter value of x1 and x2: "; cin >> x1 >> x2;
          if(f(x1) * f(x2) > 0){
               cout << "INVALID INTERVAL";
          }
          else{
               cout << "Roots lie between " << x1 << " and " << x2 << endl;
               break;
          }
     } while(1);
     //find x0
     if(abs(f(x1)) < abs(f(x2))){
          x0 = x1;
     }
     else{
          x1 = x2;
     }
     //find root
     for(i=1;i<maxIteration;i++){
          x = x0 - (f(x)/differentiate(x));
          if(abs(x-x0) < epsilon){
               cout << "Iterations=" << i  << "x= " << x << "x0= " << x0 << "  Final Root= " << x << endl;
               return 0;
          }
          cout << "Iterations= " << i << "x= " << x << "x0= " << x0 << "  Roots= " << x << endl;
          x0 = x;
     }
     cout << "Roots= " << x << "Total iterations= " << --i;
     return 0;
}
