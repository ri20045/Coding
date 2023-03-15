#include<iostream>
// Define currency class which contains rupees and paisa as datamembers. 
// Write a friend function named AddCurrency() which add 2 different Currency objects and returns a Currencyobject. 
// Write parameterized constructor to initialize the values 
// and use appropriate functions to get the details from the user and display it.
using namespace std;

class Currency{
    private:
        int rupees;
        int paisa;
    public:
        Currency(int r, int p){
            rupees = r;
            paisa = p;
        }
        void display(){
            cout<<rupees<<" Rupees "<<paisa<<" Paisa"<<endl;
        }
        friend Currency AddCurrency(Currency, Currency);
};

Currency AddCurrency(Currency c1, Currency c2){
    int r, p;
    r = c1.rupees + c2.rupees;
    p = c1.paisa + c2.paisa;
    r += p/100;
    p = p%100;
    Currency c3(r, p);
    return c3;
}

int main(){
    int r, p;
    cout<<"Enter Currency 1 (Rupees and Paisa): ";
    cin>>r>>p;
    Currency c1(r, p);
    cout<<"Enter Currency 2 (Rupees and Paisa): ";
    cin>>r>>p;
    Currency c2(r, p);
    cout<<"Currency 1: ";
    c1.display();
    cout<<"Currency 2: ";
    c2.display();
    Currency c3 = AddCurrency(c1, c2);
    cout<<"Sum of Currency 1 and Currency 2: ";
    c3.display();
    return 0;
}
