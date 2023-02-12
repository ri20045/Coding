#include<iostream>
using namespace std;
class Student{
    protected:
    int roll_no;
    public:
    void getRoll(int r){
        roll_no=r;
    }
    void disproll(){
        cout << "Roll no of student: " << roll_no << endl;
    }
};
class Test: virtual public Student{
    protected:
    float maths,physics;
    public:
    void getmarks(float x,float y){
        maths=x;
        physics=y;
    }
    void dispmarks(){
        cout << "Maths marks: " << maths << endl;
        cout << "Physics marks: " << physics << endl;
    }
};
class Sports: virtual public Student{
    protected:
    float score;
    public:
    void getsports(float s){
        score=s;
    }
    void dispscore(){
        cout << "Sports score: " << score << endl;
    }
};
class Result: public Test,public Sports{
    float total;
    public:
    void calculate(){
        cout << "YOUR RESULT IS HERE" << endl;
        dispmarks();
        dispscore();
        total = maths+physics+score;
        cout << "Your Result: " << total << endl;
    }
};
int main(){
    Result res;
    res.getRoll(2022210959);
    res.disproll();
    res.getmarks(95.42,95);
    res.getsports(9);
    res.calculate();
    return 0;
}
