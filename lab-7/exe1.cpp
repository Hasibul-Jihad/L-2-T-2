#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;

public:
    Distance(){
        feet = 0,
        inches = 0;
    } 

    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    void print() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    bool operator<(Distance d) {
        int totalInches1 = (feet * 12) + inches;
        int totalInches2 = (d.feet * 12) + d.inches;
        return totalInches1 < totalInches2;
    }

    friend Distance operator+(Distance d1, Distance d2);
};

Distance operator+(Distance d1, Distance d2) {
    int totalInches = (d1.feet * 12 + d1.inches) + (d2.feet * 12 + d2.inches);
    int feet = totalInches / 12;
    int inches = totalInches % 12;
    return Distance(feet, inches);
}

int main() {
    Distance d1(5, 8), d2(3, 4);

    cout << "Distance 1: ";
    d1.print();

    cout << "Distance 2: ";
    d2.print();

    if (d1 < d2) {
        cout << "Distance 1 is less than Distance 2" << endl;
    } else {
        cout << "Distance 1 is not less than Distance 2" << endl;
    }

    Distance d3 = d1 + d2;

    cout << "Sum of Distances: ";
    d3.print();

    return 0;
}
