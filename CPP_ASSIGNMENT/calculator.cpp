#include<iostream>
#include<cmath>
using namespace std;
// Create 2 classes:
//     1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / 
        // and displays the results using another function.
//     2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations 
        // of your choice and displays the results using another function.

//     Create another class HybridCalculator and inherit it using these 2 classes:

class SimpleCalculator{
    protected:
    int num1,num2;
    public:
    void getNum(int x,int y){
        num1=x;
        num2=y;
    }
    void calculate(){
        cout << "\nSIMPLE CALCULATOR";
        cout << "\nAddition: " << num1+num2;
        cout << "\nSubtraction: " << num1-num2;
        cout << "\nMultiplication: " << num1*num2;
        cout << "\nDivision: " << num1/num2;
    }
};
class ScientificCalculator{
    protected:
    int n1,n2;
    public:
    void getNumbers(int x,int y){
        n1=x;
        n2=y;
    }
    void display(){
        cout << "\n\nSCIENTIFIC CALCULATOR" << endl;
        cout << "\nSquare of n1: " << sqrt(n1);
        cout << "\nSquare of n2: " << sqrt(n2);
        cout << "\nPower(n1): " << pow(n1,2);
        cout << "\nPower(n2): " << pow(n2,2);
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    public:
    void setinfo(int a,int b){
        getNum(a,b);
        calculate();
        getNumbers(a,b);
        display();
    }
};
int main(){
    HybridCalculator hybrid;
    int x,y;
    cout << "\nEnter values: ";
    cin >> x >> y;
    hybrid.setinfo(x,y);
    
    return 0;
}
