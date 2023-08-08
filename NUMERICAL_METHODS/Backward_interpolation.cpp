#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
float x,u1,u,y;
int i,j,fact,n;
cout << "Enter size of an array: "; cin >> n;
float a[n][n+1];
cout << "Enter values of X: ";
for(int i=0;i<n;i++){
     cin >> a[i][0];
}
cout << "Enter values of Y: ";
for(int i=0;i<n;i++){
     cin >> a[i][1];
}
//find the difference table
for(j=2;j<=n;j++){
     for(i=0;i<n-j+1;i++){
          a[i][j] = a[i+1][j-1] - a[i][j-1];
     }
}
//printing the difference table
cout << "DISPLAY DIFFERENCE TABLE" << endl;
for(i=0;i<n;i++){
     for(j=0;j<=n-i;j++){
          cout << "\t" << a[i][j];
     }
     cout << endl;
}
cout << "Enter value of x where you want to find y: ";
cin >> x;
//find u
u = (x - (a[n-1][0]))/(a[1][1] - a[0][1]);
y = a[n-1][1];
u1 = u;
fact = 1;
j = 2;
for(i=n-2;i>=0;i--){
     y = y+(u1*a[i][j])/fact;
     fact = fact*j;
     u1 = u1*(u+(j-1));
     j++;
}
cout << "Value of y at " << x << " is " << y; 
     return 0;
}
