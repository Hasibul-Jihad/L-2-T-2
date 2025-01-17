#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
public:
    void print() override {  // 'override' is optional but recommended
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived d1;
    d1.print(); // Calls Derived's print() method
    return 0;
}

/*
int main() {
    Base d1;
    d1.print(); // Calls Derived's print() method
    return 0;
}
*/