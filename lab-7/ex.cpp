#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    void input() {
        cin >> real >> imag;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void output() {
        if (imag < 0)
            cout << real << imag << "i" << endl;
        else
            cout << real << "+" << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, result;
    c1.input();
    c2.input();
    result = c1 + c2;
    result.output();
    return 0;
}
