#include<iostream>
using namespace std;
class Programming{
public:
Programming(){
    cout << "I love Programming languages\n";
}
Programming(string str){
    cout << "i love " << str;
}

};
int main(){
Programming string1 = Programming();
Programming string2 = Programming("cpp");

return 0;
}
