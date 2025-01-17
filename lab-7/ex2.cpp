#include <iostream>
using namespace std;

class Count {
private:
    int value;

public:
    Count() {
        value = 8;
    }

    void operator++() {
        ++value;
    }

    void operator++(int) {
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count c1;
    c1++;
    c1.display();
    ++c1;
    c1.display();
    return 0;
}
