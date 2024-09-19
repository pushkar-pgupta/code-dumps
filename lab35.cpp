#include<iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor to initialize the value
    Number(int val) {
        value = val;
    }

    // Overload unary minus operator to change the sign of the number
    Number operator-() {
        return Number(-value);
    }

    // Overload addition operator to add two numbers
    Number operator+(Number n) {
        return Number(value + n.value);
    }

    // Function to display the value
    void display() {
        cout << value << endl;
    }
};

int main() {
    int num1, num2;

    // Input values from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Create objects of class Number
    Number n1(num1);
    Number n2(num2);

    // Change the sign of the first number using unary minus operator
    Number neg_n1 = -n1;

    // Perform addition using overloaded addition operator
    Number sum = n1 + n2;

    // Display the results
    cout << "Original value of first number: ";
    n1.display();
    cout << "Changed sign of first number: ";
    neg_n1.display();
    cout << "Sum of two numbers: ";
    sum.display();

return 0;
}