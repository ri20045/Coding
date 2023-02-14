#include<iostream>
using namespace std;
inline int cube(int x){
    return x*x*x;
}
int main(){
    cout << "Cube of n: " << cube(2) << endl;
    return 0;
}
