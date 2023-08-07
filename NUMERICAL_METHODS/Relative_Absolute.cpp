#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
     double approxValue = 3.14567;
     double truePI = 3.14578;

     double absoluteError = abs(approxValue - truePI);
     cout << "Absolute Error is: " << absoluteError << endl;

     double relativeError = absoluteError/(truePI);
     cout << "Relative error: " << relativeError;
     return 0;
}
