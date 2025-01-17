#include <iostream>
using namespace std;

class DivisibleBy11 {
private:
    int sum;
public:
    DivisibleBy11() {
        sum = 0;
    }

    friend void findDivisibles(DivisibleBy11);
};

void findDivisibles(DivisibleBy11 obj) {
    cout << "Numbers divisible by 11 between 100 and 200: ";
    for (int i = 100; i <= 200; i++) {
        if (i % 11 == 0) {
            cout << i << " ";
            obj.sum += i;
        }
    }
    cout << endl << "Sum: " << obj.sum << endl;
}

int main() {
    DivisibleBy11 obj;
    findDivisibles(obj);
    return 0;
}
