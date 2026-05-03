#include <iostream>
using namespace std;

class Device {
protected:
    int id;
    bool isOn;
public:
    Device(int i) : id(i), isOn(true) {}
};

class SmartLight : public Device {
    float wattage;
public:
    SmartLight(int i, float w) : Device(i), wattage(w) {}
    void calculateConsumption(float hours) {
        float kwh = (wattage * hours) / 1000;
        cout << "Device ID " << id << " consumed " << kwh << " kWh." << endl;
    }
};

int main() {
    SmartLight bulb(101, 60);
    bulb.calculateConsumption(5.5);
    return 0;
}
