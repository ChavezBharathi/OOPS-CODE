#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual void calculateArea() = 0; // Pure Virtual Function
    virtual ~Shape() {}
};

class Square : public Shape {
    float side = 4.0;
public:
    void calculateArea() override {
        cout << "Square Area: " << side * side << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate abstract class
    Shape* s = new Square();
    s->calculateArea();
    delete s;
    return 0;
}
