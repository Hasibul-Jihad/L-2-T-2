#include <iostream>
using namespace std;

class Marks {
protected:
    int marks[5];

public:
    void getMarks() {
        cout << "Enter marks for 5 subjects (Physics, Chemistry, Math, Biology, English):" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

class TotalMarks : public Marks {
protected:
    int total;

public:
    void calculateTotal() {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
    }

    int getTotal() {
        return total;
    }
};

class Percentage : public TotalMarks {
public:
    void displayPercentage() {
        calculateTotal();
        float percentage = (float(total) / 500) * 100;
        cout << "Total Marks = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;
    }
};

int main() {
    Percentage student;
    student.getMarks();
    student.displayPercentage();

    return 0;
}
