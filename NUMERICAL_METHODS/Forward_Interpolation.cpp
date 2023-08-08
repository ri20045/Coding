#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
float a[100][100],x,u1,u,y;
int i,j,n,fact;
cout << "Enter size of an array: "; cin >> n;
cout << "Enter values of X: "; 
for(int i=0;i<n;i++){
     cin >> a[i][0];
}
cout << "Enter values of Y: "; 
for(int i=0;i<n;i++){
     cin >> a[i][1];
}
cout << "Enter value of x where you want to find y: ";
cin >> x;
//difference table
for(j=2;j<=n;j++){
     for(i=0;i<n-j+1;i++){
          a[i][j] = a[i+1][j-1] - a[i][j-1];
     }
}
//print/display difference table
cout << "THE DIFFERENCE TABLE IS AS FOLLOWS" << endl;
for(i=0;i<n;i++){
     for(j=0;j<=n-i;j++){
          cout << "\t" << a[i][j];
     }
     cout << endl;
}
//find u
u = (x - a[0][0]) / (a[1][0] - a[0][0]);
//initialize y, u1 and factorial
y = a[0][1];
u1 = u;
fact = 1;
for(i=2;i<=n;i++){
     y = y + (u1*a[0][i])/fact;
     fact = fact * i;
     u1 = u1*(u-(i-1));
}
cout << "value at " << x << " is " << y;
     return 0;
}
