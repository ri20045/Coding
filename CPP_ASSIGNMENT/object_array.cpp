#include<iostream>
using namespace std;
class employee{
    int id;
    string name;

    public:
    void setinfo(){
       cout << "\nEnter id: ";
       cin >> id;
       cout << "\nEnter name: ";
       cin >> name;
    }
    void display(){
        cout << "\nId: " << id;
        cout << "\nName: " << name;
    }
};
int main(){

    employee emp[40];
    int n;
    string y;
    cout << "\nEnter the number of Employees: ";
    cin >> n;
    for(int i=0;i<=n;i++){
        emp[i].setinfo();
        emp[i].display();
    }
    return 0;
}
