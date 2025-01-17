#include <iostream>
using namespace std;

class Number {
private:
    int num;
    friend class PrimeCheck;

public:
    Number() {
        num = 0;
    }

    void setNumber(int n) {
        num = n;
    }
};

class PrimeCheck {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    void checkSum(Number obj) {
        bool found = false;
        cout << "Checking if " << obj.num << " can be expressed as the sum of two prime numbers:" << endl;
        for (int i = 2; i <= obj.num / 2; i++) {
            if (isPrime(i) && isPrime(obj.num - i)) {
                cout << obj.num << " = " << i << " + " << obj.num - i << endl;
                found = true;
            }
        }
        if (!found) {
            cout << obj.num << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }
};

int main() {
    Number obj;
    PrimeCheck checker;

    int input;
    cout << "Enter a number: ";
    cin >> input;

    obj.setNumber(input);
    checker.checkSum(obj);

    return 0;
}
