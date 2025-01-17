#include<iostream>
using namespace std;

class Batsman {
private:
    int batsman_ID;
    string name;
    static int btscount;
public:
    Batsman() {
        btscount++;
    }

    static int getcount() {
        return btscount;
    }

    void getname() {
        cout << "Enter Batsman Name: ";
        cin >> name;
    }

    void showname() {
        cout << "Batsman Name: " << name << endl;
    }
};

int Batsman::btscount = 0;

int main() {
    cout << "Initially number of batsman: " << Batsman::getcount() << endl;

    int n;
    cout << "Enter number of entry: ";
    cin >> n;

    Batsman batsmen[n];

    for (int i = 0; i < n; i++) {
        batsmen[i].getname();
    }

    cout << "Finally number of batsmen: " << Batsman::getcount() << endl;

    for (int i = 0; i < n; i++) {
        batsmen[i].showname();
    }

    return 0;
}
