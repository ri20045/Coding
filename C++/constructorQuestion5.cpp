#include<iostream>
using namespace std;
class PrintNumber{
public:
void printn(int n){
    cout << n << endl;
}
void printn(float n){
    cout << n << endl;
}
void printn(double n){
    cout << n << endl;
}
};
int main(){
    PrintNumber number;
    number.printn(7);
    number.printn(7.5f); //always give float value with 'f' otherwise it is considered as double by default.
    number.printn(7.234567);

return 0;
}
