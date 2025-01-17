#include<iostream>
using namespace std;

class Shape {
public:
    double area(double radius) {
        return 3.14159 * radius * radius;
    }

    double area(double base, double height) {
        return 0.5 * base * height;
    }

    double area(double length, double width, bool isRectangle) {
        return length * width;
    }
};

int main() {
    Shape shape;

    double rad;
    cout << "radius: ";
    cin >> rad;
    cout << "Area of the circle: " << shape.area(rad) << endl;

    double base, height;
    cout << "base and height: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << shape.area(base, height) << endl;

    double length, width;
    cout << "length and width: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << shape.area(length, width, true) << endl;

    return 0;
}
