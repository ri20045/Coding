#include<iostream>
using namespace std;
class Programming{
string s;
public:
Programming(){}
Programming(string str){
    s = str;
}
void printString(){
    cout << "I love programming languages\n";
}
void printStatement(){
    cout << "I love " << s;
}
};
int main(){
Programming string1 = Programming();
string1.printString();
Programming string2 = Programming("cpp");
string2.printStatement();
    return 0;
}
