#include <iostream>
#include <string>
using namespace std;

class Device {
    string deviceName;
    bool isOn;
public:
    Device(string name) : deviceName(name), isOn(false) {}
    void togglePower() {
        isOn = !isOn;
        cout << deviceName << " is now " << (isOn ? "ON" : "OFF") << endl;
    }
};

int main() {
    Device lamp("Living Room Lamp");
    lamp.togglePower();
    lamp.togglePower();
    return 0;
}
