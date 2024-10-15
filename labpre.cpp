#include <iostream>
using namespace std;

// Base class: STUDENT
class STUDENT {
protected:
    int roll_no;
    int reg_no;
public:
    void get_number() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter registration number: ";
        cin >> reg_no;
    }
    void put_number() const {
        cout << "Roll number: " << roll_no << endl;
        cout << "Registration number: " << reg_no << endl;
    }
};

// Derived class: TEST (inherits STUDENT)
class TEST : public STUDENT {
protected:
    float part1, part2;
public:
    void get_number() {
        STUDENT::get_number();
        cout << "Enter marks for part 1: ";
        cin >> part1;
        cout << "Enter marks for part 2: ";
        cin >> part2;
    }
    void put_number() const {
        STUDENT::put_number();
        cout << "Marks in part 1: " << part1 << endl;
        cout << "Marks in part 2: " << part2 << endl;
    }
};

// Derived class: SPORTS (inherits STUDENT)
class SPORTS : public STUDENT {
protected:
    float score;
public:
    void get_number() {
        cout << "Enter sports score: ";
        cin >> score;
    }
    void put_number() const {
        cout << "Sports score: " << score << endl;
    }
};

// Derived class: RESULT (inherits TEST and SPORTS)
class RESULT : public TEST, public SPORTS {
private:
    float total;
public:
    void display() {
        total = part1 + part2 + score;
        TEST::put_number();
        SPORTS::put_number();
        cout << "Total score (part1 + part2 + sports): " << total << endl;
    }
};

int main() {
    RESULT student;
    student.TEST::get_number(); // Input for roll_no, reg_no, part1, part2
    student.SPORTS::get_number(); // Input for sports score
    student.display(); // Display total score
    
    return 0;
}
