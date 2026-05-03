#include <iostream>
using namespace std;

class Vehicle {
protected:
    const float efficiencyFactor = 0.85;
};

class Car : public Vehicle {
protected:
    string fuelType;
};

class ElectricCar : public Car {
    float batteryCapacity;
public:
    ElectricCar(float b) : batteryCapacity(b) { fuelType = "Electric"; }
    void showRange() {
        cout << "Total Travel Range: " << (batteryCapacity * efficiencyFactor) << " miles." << endl;
    }
};

int main() {
    ElectricCar tesla(100.0);
    tesla.showRange();
    return 0;
}
