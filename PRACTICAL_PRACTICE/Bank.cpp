#include<iostream>
using namespace std;
// Create a class name bank and create 3 member function named balance, deposit and withdraw 
// and declare all the member function outside the class using scope resolution operator. 
// And perform task while deposit and withdraw.

class Bank{
    int balance;
    int deposit;
    int withdraw;

    public:
    Bank(int ,int ,int);
    int getbalance();
    int getdeposit();
    int getwithdraw();
    int withdraw_money(int);
    int deposit_money(int);
};

Bank::Bank(int b,int d,int w){
    balance = b;
    deposit = d;
    withdraw = w;
}
int Bank::getbalance(){
    return balance;
}
int Bank::getdeposit(){
    return deposit;
}
int Bank::getwithdraw(){
    return withdraw;
}
int Bank::withdraw_money(int money){
    balance = balance - money;
    return balance;
}
int Bank::deposit_money(int amount){
    balance = balance + amount;
    return balance;
}
int main(){
    Bank b(50000,10000,10000);
    cout << "\nBalance: " << b.getbalance();
    cout << "\nDeposit: " << b.getdeposit();
    cout << "\nWithdrawl: " << b.getwithdraw();
    cout << "\n\nBalance after withdawing: " << b.withdraw_money(10000);
    cout << "\nBalance after Deposit: " << b.deposit_money(10000);

   return 0;
}
