#include <iostream>
using namespace std;

class Base {
public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived Function" << endl;
        Base::print();
    }
};

int main() {
    Derived d1;
    d1.print();
    return 0;
}
