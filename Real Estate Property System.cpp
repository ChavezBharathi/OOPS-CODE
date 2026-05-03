#include <iostream>
using namespace std;

class Property {
protected:
    float area;
public:
    void getArea() {
        cout << "Enter area in sq ft: "; cin >> area;
    }
};

class Residential : public Property {
    int rooms;
public:
    void getDetails() {
        getArea();
        cout << "Enter number of rooms: "; cin >> rooms;
    }
    void calculateTax() {
        float tax = (area * 5.5) + (rooms * 100);
        cout << "Total Maintenance Tax: $" << tax << endl;
    }
};

int main() {
    Residential home;
    home.getDetails();
    home.calculateTax();
    return 0;
}
