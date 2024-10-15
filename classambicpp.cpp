#include<iostream>
using namespace std;

class base {
    public:
     virtual void show()=0; //{ cout << "Base class\n"; } // virtual keyword a func declared in the base class {it my be defined in the derived class}
};

class derived : public base {
    public:
    void show() { cout << "Derived class\n"; }
};

int main() {
    derived ob1;
    base *ptr = &ob1; // Pointer to base class pointing to derived object
    ob1.show();      // Calls the show method
    
    return 0;
}
// a pure virtual function declared inside the base class doesntot has a definiton in the base class and all derived claass must provide defintion for the derived class
// class with 1 virtual unction is called abstract class
