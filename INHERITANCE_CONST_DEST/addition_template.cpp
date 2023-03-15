#include <iostream>
using namespace std;
template<class T1, class T2>
void sum(T1 a, T2 b){
    cout << "sum: " << a+b;
}
int main(){
    int x,y;
    float a,b;
    cout << "\nEnter integer values: ";
    cin >> x >> y;
    cout << "\nEnter float values: ";
    cin >> a >> b;
    sum(a,x);
    sum(b,y);
 return 0;
}
