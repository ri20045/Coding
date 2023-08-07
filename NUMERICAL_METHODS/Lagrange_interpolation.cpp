#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
     int n;
     cout << "Enter the size of an array: "; cin >> n;
     float X[n],Y[n],sum = 0,term,x;
     int i,j;
     for(i=0;i<n;i++){
          cin >> X[i];
     }
     for(i=0;i<n;i++){
          cout << X[i] << " ";
     }
     for(i=0;i<n;i++){
          cin >> Y[i];
     }
     cout << "Enter value of x at which you want to find y: "; cin >> x;

     for(i=0;i<n;i++){
          term = 1;
          for(j=0;j<n;j++){
               if(i != j){
                    term = term * ((x - X[j]) / (X[i] - X[j]));
               }
          }
          sum = sum + term * Y[i];
     }
     cout << "Value at " << x << " is " << sum;
     return 0;
}
