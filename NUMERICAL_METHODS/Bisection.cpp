#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float f(float x){
     return pow(x,3) - 4*x - 9;
}
float bisect(float x1,float x2){
     return (x1+x2)/2;
}
int main(){
     int maxIteration,i=1;
     float x1,x2,x3,x,epsilon;
     cout << "Enter maximum iteration: "; cin >> maxIteration;
     cout << "Enter epsilon: "; cin >> epsilon;
     //computing x1 and x2
     do{
          cout << "Enter x1 and x2: "; cin >> x1 >> x2;
          if(f(x1) * f(x2) > 0){
               cout << "INVALID INTERVAL" << endl;
               continue;
          }
          else{
               cout << "Roots lie between " << x1 << " and " << x2 << endl;
               break;
          }
          
     }while(1);
     //bisection(x) started
     x = bisect(x1,x2);//find the mid point
     
     do{ 
          if(f(x) * f(x1) < 0){
               x2 = x;//shiftinf of x2
          }
          else if(f(x) * f(x2)){
               x1 = x;
          }
          cout << "Iterations= " << i << "  roots= " << x << endl;
          x3 = bisect(x1,x2);
          if(abs(x3-x) < epsilon){
               cout << "Root= " << x << "  Total iterations= " << i << endl;
               return 0;
          }
          x = x3;
          i++;
     }while(i <= maxIteration);
     cout << "Root= " << x << "  Total iterations= " << --i << endl;
     return 0;
}
