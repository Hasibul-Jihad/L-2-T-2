
#include <iostream>
using namespace std;

class Number {
private:
    int num;
    friend int reverseNumber(Number);

public:
    Number() {
        num = 0;
    }

    void setNumber(int n) {
        num = n;
    }
};

int reverseNumber(Number n) {
    int reversed = 0;
    while (n.num != 0) {
        reversed = reversed * 10 + (n.num % 10);
        n.num /= 10;
    }
    return reversed;
}

int main() {
    Number n;
    int input;

    cout << "Enter a number: ";
    cin >> input;

    n.setNumber(input);
    cout << "Reversed Number: " << reverseNumber(n) << endl;

    return 0;
}