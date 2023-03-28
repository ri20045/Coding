#include<iostream>
using namespace std;
//add two numbers using class template.
template<typename T>
class Add{
    public:
    T add(T a, T b){
        return a+b;
    }
};
int main(){
    Add<int> intadd;
    cout << "\nInt sum: " << intadd.add(2,3);
    Add<float> floatadd;
    cout << "\nFloat sum: " << floatadd.add(2,4);
    return 0;
}
