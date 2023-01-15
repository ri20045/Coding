#include<iostream>
using namespace std;
//display width of box;
class dimensions{

    int width;
    public:
    void setvalue(int x){
        width = x;
    }
    friend int setwidth(dimensions d);
};
    
    int setwidth(dimensions d){
        return d.width;
    }
int main(){

    dimensions d1;
    d1.setvalue(10);
    cout << "Width: " << setwidth(d1);
   
    return 0;
}
