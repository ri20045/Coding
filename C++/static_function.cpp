#include<iostream>
using namespace std;

class demo{
    int number;
    static int count;

    public:
    void getdata(int x){
        number = x;
        count++;
    }
    static void display(){
        cout << "\nValue of count: " << count;
    }
};
     int demo :: count;
int main(){

    demo d1,d2,d3;
    d1.getdata(100);
    demo::display();

    d2.getdata(200);
    demo::display();

    d3.getdata(300);
    demo::display();
    
    return 0;
}
