#include<iostream>
using namespace std;
// Make use of copy constructor in class employee using array of 5 objects
class employee{
    int id;
    string name;
    public:
    employee(int x, string s){
        id=x;
        name=s;
    }
    // employee(){}
    employee(const employee &obj){
        id=obj.id;
        name=obj.name;
    }
    int getid(){
        return id;
    }
    string getname(){
        return name;
    }
};
int main(){
    int p;
    string q;
    int n;
    cout << "\nEnter number of details: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "\nEnter id and name: ";cin >> p >> q;
        employee obj(p,q);
        employee emp2=obj;
        cout << "Details: " << emp2.getid() << " " << emp2.getname();
    }
   
    return 0;
}
