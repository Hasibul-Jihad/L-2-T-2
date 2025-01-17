#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string car_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:
    // Default constructor
    Car() {
        car_name = "Audi";
        model_name = "Allstreet Avus Hatchback";
        fuel_type = "Premium";
        mileage = 20;
        price = 20000;
        cout << "Default constructor has been called." << endl;
    }

    // Parameterized constructor
    Car(string cn, string mn, string ft, float mil, double pr) {
        car_name = cn;
        model_name = mn;
        fuel_type = ft;
        mileage = mil;
        price = pr;
        cout << "Parameterized constructor has been called." << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor has been called for " << car_name << endl;
    }

    // Function to display data members
    void displayData() {
        cout << "Car Name: " << car_name << endl;
        cout << "Model Name: " << model_name << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    // Using the default constructor
    Car car1;
    car1.displayData();
    cout << endl;

    // Using the parameterized constructor
    Car car2("Toyota", "Corolla", "Petrol", 18.5, 20000);
    car2.displayData();

    return 0;
}
