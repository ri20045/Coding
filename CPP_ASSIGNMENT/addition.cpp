#include<iostream>
//add two values a and b and store them in another variable c using class and object;
using namespace std;
class calculation{
    int a,b;
    public:
    void setA(int x){
        a=x;
    }
    void setB(int y){
        b=y;
    }
    int addition(){
        return a+b;
    }

};
int main(){
    calculation c;
    int x,y;
    cout << "Enter x: " << endl;
    cin >> x;
    cout << "Enter y: " << endl;
    cin >> y;
    c.setA(x);
    c.setB(y);
    int result = c.addition();
    cout << "Result = " << result;
    return 0;
}
   
