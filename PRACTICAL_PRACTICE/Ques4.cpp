#include<iostream>
using namespace std;
// 4) Define currency class which contains rupees and paisa as data members.
// Write a friend function named AddCurrency ( ) which add 2 different Currency objects and returns a Currency object.
// Write parameterized constructor to initialize the values and 
// use appropriate functions to get the details from the user and display it.
class currency{
    int rupees,paisa;
    public:
    currency(){}
    currency(int r, int p){
        rupees = r;
        paisa = p;
    }
    void display(){
        cout << "Rupees: " << rupees << endl;
        cout << "Paisa: " << paisa << endl;
    }
    friend currency AddCurrency(currency c1, currency c2);
};
currency AddCurrency(currency c1, currency c2){
    currency temp;
    temp.rupees = c1.rupees + c2.rupees;
    temp.paisa = c1.paisa + c2.paisa;  
    temp.rupees += temp.paisa/100;
    temp.paisa %= 100;
    return temp;
}
int main(){
    int r, p;
    cout << "Enter the rupees: ";
    cin >> r; cout << endl;
    cout << "Enter the paisa: ";
    cin >> p; cout << endl;
    currency c1(r,p);

    cout << "Enter the rupees: ";
    cin >> r; cout << endl;
    cout << "Enter the paisa: ";
    cin >> p; cout << endl;
    currency c2(r,p);

    currency c3 = AddCurrency(c1,c2);
    c3.display();
    return 0;
}
