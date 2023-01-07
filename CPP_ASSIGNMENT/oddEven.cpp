#include<iostream>
//Enter starting and ending value from user and print only even numbers between them using class and objects;
using namespace std;
class number{
    int num1,num2;
    public:
    void setnum1(int x){
        num1=x;
    }
    void setnum2(int y){
        num2=y;
    }
    void even(){
        for(int i=num1;i<=num2;i++){
            if(i%2==0){
                cout << i << " ";
            }
        }
    }
};
int main(){

    number obj;
    int x,y;
    cout << "Enter num1: ";
    cin >> x;
    cout << endl;
    cout << "Enter num2: ";
    cin >> y;
    obj.setnum1(x);
    obj.setnum2(y);
    obj.even();
    
    return 0;
}
