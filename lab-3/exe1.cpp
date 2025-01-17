#include<iostream>
using namespace std;

class Square {
private:
    int side; //variable of the object(s1, s2 are the objects)
public:
    static int objectCount; //variable of the class

    // Constructor definition
    Square() {
        objectCount++;//value increasesd upon  creating objects
    }
};


int Square::objectCount = 0;//square is the scope in this case and can't access objectCount without square scope. Hence double colon is used.

int main() {
    Square s1;
    cout << "Total objects: " << Square::objectCount << endl;

    Square s2;

    cout << "Total objects: " << Square::objectCount << endl;

    return 0;
}
