#include<iostream>
using namespace std;
class AddAmount{
int amount;
public:
AddAmount(){
    amount = 50;
}
AddAmount(int a){
    amount = 50;
    amount = a + amount;
}
void Printamount(){
    cout << "The total amount is " << amount;
}
};
int main(){
    AddAmount amount1 = AddAmount();
    AddAmount amount2 = AddAmount(50);
    amount1.Printamount();
    amount2.Printamount();
   
    return 0;
}
