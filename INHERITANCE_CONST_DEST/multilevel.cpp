#include <iostream>
using namespace std;

// Base class
class Number {
   protected:
    int num1, num2;

   public:
    void get_numbers() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
};

// Derived class 1
class Sum : public Number {
   protected:
    int sum;

   public:
    void calculate_sum() {
        sum = num1 + num2;
    }
};

// Derived class 2
class AddThirdNum : public Sum {
   private:
    int num3;

   public:
    void get_third_number() {
        cout << "Enter third number: ";
        cin >> num3;
    }

    void calculate_sum() {
        Sum::calculate_sum();
        sum += num3;
    }

    void display_sum() {
        cout << "The sum of three numbers is " << sum << endl;
    }
};

int main() {
    AddThirdNum add;
    add.get_numbers();
    add.get_third_number();
    add.calculate_sum();
    add.display_sum();

    return 0;
}





