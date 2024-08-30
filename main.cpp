#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand;

    // Parameterized constructor
    Vehicle(string vehicleBrand) : brand(vehicleBrand) {
        cout << "Vehicle constructor called with brand: " << brand << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    string model;

    // Parameterized constructor
    Car(string carBrand, string carModel) : Vehicle(carBrand), model(carModel) {
        cout << "Car constructor called with brand: " << carBrand << " and model: " << carModel << endl;
    }

    // Overloaded constructor
    Car(string carBrand) : Vehicle(carBrand), model("Unknown") {
        cout << "Car overloaded constructor called with brand: " << carBrand << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Car car1("Toyota", "Corolla");
    Car car2("Honda");

    return 0;
}
