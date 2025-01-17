#include <iostream>
using namespace std;

class BOX {
private:
    double length;
    double breadth;
    double height;

public:
    // Function to initialize private variables
    void initData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    // Function to calculate area of the box
    double calculateArea() {
        return length * breadth;
    }

    // Function to calculate volume of the box
    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    // Create an object of BOX class
    BOX box1;

    // Pass the values of private variables as arguments
    box1.initData(42.5, 30.8, 19.2);

    // Print the area and volume of the box
    cout << "Area of BOX = " << box1.calculateArea() << endl;
    cout << "Volume of BOX = " << box1.calculateVolume() << endl;

    return 0;
}
