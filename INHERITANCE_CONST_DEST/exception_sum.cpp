#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum;
    cout << "Enter num1 and num2: ";
    cin >> num1 >> num2;
    try{
        if(cin.fail()){
            throw runtime_error("invalid");
        }
        else{
            sum = num1 + num2;
            cout << "\nSUM: " << sum;
        }
    }
    catch(runtime_error& e){
        cout << e.what();
    }
    return 0;
}
