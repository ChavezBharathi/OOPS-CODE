#include <iostream>
using namespace std;

class Vehicle {
protected:
    int speed;
public:
    Vehicle(int s) : speed(s) {}
    virtual void display() { cout << "Base Vehicle Speed: " << speed << " km/h" << endl; }
};

class ElectricCar : public Vehicle {
    int battery;
public:
    ElectricCar(int s, int b) : Vehicle(s), battery(b) {}
    void display() override {
        cout << "EV Speed: " << speed << " km/h, Battery: " << battery << "%" << endl;
    }
};

int main() {
    Vehicle* v = new ElectricCar(120, 85);
    v->display();
    delete v;
    return 0;
}
