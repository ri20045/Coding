//GAUSS ELIMINATION

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

	int i,j,k,n;
	cout<< setprecision(3)<< fixed;
	cout << "Enter number of unknowns: ";
	cin >> n;

	float a[n][n+1], value[n], ratio, sum;

	cout << "Enter Augmented Matrix: ";
	for(i=0;i<n;i++){
		for(j=0;j<n+1;j++){
	cout << "a[" << i << "][" << j << "]:";
	cin >> a[i][j];
	}
}

	//Converting Augmented Matrix into Upper Triangular matrix
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j>i){
				ratio = a[j][i]/a[i][i];
				//performing row operations
				for(k=0;k<n+1;k++){
					a[j][k] = a[j][k] - (ratio * a[i][k]); 
				}
			}
		}
	}
	//Display the Upper Triangular matrix
	for(i=0;i<n;i++){
		for(j=0;j<n+1;j++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

	//Back substituition individually for z
	value[n-1] = a[n-1][n] / a[n-1][n-1];

	//To store other unknown value in an value[size] array
	for(i=n-2;i>=0;i--){
		sum = 0;
		for(j=i+1;j<n;j++){
			sum = sum + a[i][j] * value[j];
		}
		value[i] = (a[i][n] - sum) / a[i][i];
	}
	for(i=0;i<n;i++){
		cout << "x[" << i << "]: " << value[i] << endl;
	}
	return 0;
}





//GAUSS JORDAN
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

int i,j,k,n;
cout<< setprecision(3)<< fixed;
cout << "Enter number of unknowns: ";
cin >> n;

float a[n][n+1], ratio, sum, value[n];
cout << "Enter Augmented Matrix:";
for(i=0;i<n;i++){
	for(j=0;j<n+1;j++){
		cout << "a[" << i << "][" << j << "]: ";
		cin >> a[i][j];
	}
}

//Convert Augmented Matrix into Diagonal Matrix
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(j != i){
			ratio = a[j][i] / a[i][i];
			for(k=0;k<n+1;k++){
				a[j][k] = a[j][k] - (ratio * a[i][k]);
			}
		}
	}
}

//Display Diagonal Matrix
for(i=0;i<n;i++){
	for(j=0;j<n+1;j++){
		cout << a[i][j] << "\t";
	}
	cout << endl;
}

//Calculate values of unknown
for(i=0;i<n;i++){
	value[i] = a[i][n] / a[i][i];
}
for(int i=0;i<n;i++){
	cout << "x[" << i << "]= " << value[i] << endl;
}
	return 0;

}




//GAUSS JACOBI
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

#define f1(x,y,z) (85 - 6*y +z) / 27
#define f2(x, y, z)  (72 - 2*z - 6*x) / 15
#define f3(x, y, z)  (110 - x - y) / 54

int main()
{

float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;
int step = 1;
cout << setprecision(6) << fixed;

cout << "Enter tolerable error: ";
cin >> e;
cout << endl << "count \t x \t y \t z" << endl;

do
{
	x1 = f1(x0,y0,z0);
	y1 = f2(x0,y0,z0);
	z1 = f3(x0,y0,z0);
	cout << step << "\t" << x1 << "\t" << y1 << "\t" << z1 << endl;

	e1 = fabs(x0 - x1);
	e2 = fabs(y0 - y1);
	e3 = fabs(z0 - z1);

	step++;

	x0 = x1;
	y0 = y1;
	z0 = z1;
}
while (e1 >= e && e2 >= e && e3 >= e);

cout << endl << "Solution: x = " << x1 << " " << "y1 = " << y1 << " " << "z1 = " << z1;
	return 0;
}





//GAUSS SIEDEL
#include<iostream>
#include<cmath>
#include<iomanip>

// In this example we are solving
//    3x + 20y - z = -18
//    2x - 3y + 20z = 25
//    20x + y - 2z = 17

// Rearranging the equations making it diagonally dominant
//    20x + y -2z = 17
//    3x + 20y - z = -18
//    2x - 3y + 20z = 25

// unknown values
//    x = (17 - y + 2z) / 20;
//    y = (-18 - 3x + z) / 20;
//    z = (25 - 2x + 3y) / 20;

#define f1(x,y,z) (17 - y + 2*z) / 20;
#define f2(x,y,z) (-18 - 3*x + z) / 20;
#define f3(x,y,z) (25 - 2*x + 3*y) / 20;

using namespace std;

int main()
{

   float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;
   int step = 1;

   cout << setprecision(6) << fixed;

   cout << "Enter tolerable error: ";
   cin >> e;

   cout << endl << "Count\tx\ty\tz" << endl;
do
{
   x1 = f1(x0,y0,z0);
   y1 = f2(x1,y0,z0);
   z1 = f3(x1,y1,z0);

   cout << step << "\t" << x1 << "\t" << y1 << "\t" << z1 << endl;

   e1 = fabs(x0 - x1);
   e2 = fabs(y0 - y1);
   e3 = fabs(z0 - z1);

   step++;

   x0 = x1;
   y0 = y1;
   z0 = z1;
}
while(e1 >= e && e2 >= e && e3 >= e);
cout << "Solution: " << "x1 = " << x1 << " " << "y1 = " << y1 << " " << "z1 = " << z1;

   return 0;
}





//ONE THIRD SIMPSON
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

float f1(float x){
	return 1/(1+x*x);
}

int main(){
	int n;
	float i,a,b,sum=0,h;
	int position_of_term = 1;

	cout << "Enter value of lower(a) and upper limit(b): ";
	cin >> a >> b;
	cout << endl;

	cout << "Enter number of Sub-intervals(n): ";
	cin >> n;

	//find the step size or h
	h = (b - a) / n;
	sum = f1(a) + f1(b);

	for(i=a+h;i<b;i=i+h){
		if(position_of_term % 2 == 0){
			sum = sum + 2*f1(i);
		}
		else{
			sum = sum + 4*f1(i);
		}
		position_of_term++;
	}
	//Applying formula
	sum = (h * sum) / 3;
	cout << "Integral is: " << sum;
	return 0;
}





//THREE EIGHT SIMPSON
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float f1(float x){
	return 1/(1+x*x);
}
int main(){

	int n;
	float a,b,sum=0,i,h;
	int position_of_term = 1;
	cout << "Enter lower(a) and upper(b) limit: ";
	cin >> a >> b;
	cout << "enter the sub-interval(n): ";
	cin >> n;

	//calculate h
	h = (b - a) / n;
	sum = f1(a) + f1(b);

	for(i=a+h;i<b;i=i+h){
		if(position_of_term % 3 == 0){
			sum = sum + 2*f1(i);
		}
		else{
			sum = sum + 3*f1(i);
		}
		position_of_term++;
	}
	sum = (3*h)/8 * sum;
	cout << "Integral is: " << sum;
	return 0;
}




//TRAPEZOIDAL
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

float f(float x){
	return x * x * x;
}
int main()
{
	int n;
	float a, b, i, h, sum=0;

	cout << "Enter lower limit: ";
	cin >> a;
	cout << endl << "Enter upper limit: ";
	cin >> b;
	cout << endl << "Enter no. of intervals: ";
	cin >> n;

	//calculate difference between intervals which is h
	h = (b - a) / n;
	sum = f(a) + f(b);
	for(i=a+h;i<b;i=i+h){
		sum = sum + (2 * f(i));
	}
	sum = (h * sum) / 2;
	cout << "Value of integral is: " << sum;
	return 0;
}




//DIFFERENTIATION
#include<iostream>
#include <iomanip> 
#include <math.h> 
#include <stdlib.h> 
#include <cstdlib> 
#include <cmath>
using namespace std;
int main(){
	float x[10],y[10],d[10][10],sum,h,ans,term,a;
	int i,j,k,n,sign;
	cout << "Enter no. points";
	cin >> n;
	cout << "Enter values: ";
	for(i=1;i<=n;i++){
		cout << "x[" << i << "] = " ;
		cin >> x[i];

		cout << "y[" << i << "] = " ;
		cin >> y[i];
	}
	h=x[2] - x[1];
	cout << "Enter tabulated value: ";
	cin >> a;
	if(a < x[1] || a > x[n])
	{
	cout << "error" <<endl;
	}
	i=1;
	while(a!=x[i]){
		i++;
	}
	k=i;
	for(j=1;j<=n-1;j++){
		for(i=1;i<=n;i++){
			if(j==1){
				d[i][j] = y[i+1] - y[i]; // d11 = y2-y1, d21 = y3-y2, d31 = y4-y3
			}
			else{
				d[i][j] = d[i+1][j-1] - d[i][j-1]; // col 2 i.e del^2 y0
				// d12 = d21 - d11
			}
		}
	}
	sum=0.0;
	sign=1;
	for(j=1; j<=n-k; j++){
		term = sign * d[k][j]/j;
		sign=(-1) * sign;
	}
	ans = (1.0/h) * sum;
	cout << setprecision(4) <<"ans = " <<ans;

	return 0;
}
