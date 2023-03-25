#include <iostream>
using namespace std;
// 10) create a class book contain name of book, auther name data member. 
// Derive a class book_detail which contain book price, number of pages and Quantity of book.
// Perform following operations
// 1) Create constructor to get values form user 2) Calculate total using member function
// 3) Create destructor
class Book{
    protected:
    string book_name;
    string author;
    public:
    Book(string n, string a){
        book_name = n;
        author = a;
    }
};
class Book_detail:public Book{
    int book_price, pages, quantity;
    public:
    Book_detail(string n, string a, int p, int pg, int q): Book(n,a), book_price(p), pages(pg), quantity(q){}

    void Calculate(){
        int total = book_price * quantity;
        cout << "\nTotal price of book is: " << total;
    }
    ~Book_detail(){
        cout << "\nObject Destroyed" << endl;
    }
};
int main(){
    Book_detail b("Harry Potter","JK Rowling",20,230,20);
    b.Calculate();
    return 0;
}
