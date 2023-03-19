#include<iostream>
using namespace std;
// Create a product class which consist of product_no,name,price,quantity,and amount.
// Create constructor to get data from user. 
// Create two functions named displaydata() to display the details and calculate() to calculate amt=price*quantity.
// Enter the details of 5 products.Pass the object in the function.

class Product{
    int pdt_no;
    string name;
    double price;
    int quantity;
    double amount;
    public:
    Product(int n,string s,double p,int q){
        pdt_no = n;
        name = s;
        price = p;
        quantity = q;
        amount = calculate();
    }
    void display(){
        cout << "\nProduct no.: " << pdt_no;
        cout << "\nproduct name: " << name;
        cout << "\nProduct price: " << price;
        cout << "\nProduct quantity: " << quantity;
        cout << "\nProduct amount: " << amount;
    }
    double calculate(){
        amount = price * quantity;
        return amount;
    }
};
int main(){
    Product p1(1001, "Product 1", 10.99, 5);
    Product p2(1002, "Product 2", 5.99, 10);
    Product p3(1003, "Product 3", 15.99, 2);
    Product p4(1004, "Product 4", 20.49, 3);
    Product p5(1005, "Product 5", 7.99, 8);

    p1.display();
    p2.display();
    p3.display();
    p4.display();
    p5.display();

    return 0;
}
