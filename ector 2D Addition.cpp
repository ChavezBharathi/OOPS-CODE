#include <iostream>
using namespace std;

class Vector2D {
    int x, y;
public:
    Vector2D(int x = 0, int y = 0) : x(x), y(y) {}

    // Overloading '+' operator to add two Vector2D objects
    Vector2D operator+(const Vector2D& v) {
        return Vector2D(x + v.x, y + v.y);
    }

    void display() {
        cout << "Vector: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector2D v1(10, 5), v2(3, 8);
    Vector2D v3 = v1 + v2;
    v3.display();
    return 0;
}
