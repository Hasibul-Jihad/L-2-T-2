#include<iostream>
using namespace std;

class Student {
private:
    int a, b;
    static int stdCount;
public:
    Student(int x, int y) {
        a = x;
        b = y;
        stdCount++; 
    }

    void display() {
        cout << "the value of a " << a << " &"<<" b " << b << endl;
    }

    static int getCount() {
        return stdCount;
    }
};

int Student::stdCount = 100;

int main() {
    Student s1(10, 20);
    s1.display();
    cout << "Total objects: " << Student::getCount() << endl;

    Student s2(30, 40);
    s2.display();
    cout << "Total objects: " << Student::getCount() << endl;

    return 0;
}
