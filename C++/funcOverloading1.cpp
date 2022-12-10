#include<iostream>
using namespace std;
class dataType{
    public:
    void func1(int n,char c){
        cout << n << " " << c << endl;
    }
    void func1(char c,int n){
        cout << c << " " << n;
    }
};
int main(){
   dataType datatypes;
   datatypes.func1(28,'A');
   datatypes.func1('P',56);

return 0;
}
