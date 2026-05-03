#include <iostream>
using namespace std;

class CargoShip;

class Truck {
    float weight;
public:
    Truck(float w) : weight(w) {}
    friend void compareWeight(Truck t, CargoShip s);
};

class CargoShip {
    float weight;
public:
    CargoShip(float w) : weight(w) {}
    friend void compareWeight(Truck t, CargoShip s);
};

void compareWeight(Truck t, CargoShip s) {
    if (t.weight > s.weight) cout << "Truck is heavier." << endl;
    else if (s.weight > t.weight) cout << "Ship is heavier." << endl;
    else cout << "Both weights are equal." << endl;
}

int main() {
    Truck myTruck(15.5);
    CargoShip myShip(500.2);
    compareWeight(myTruck, myShip);
    return 0;
}
