#include <iostream>
using namespace std;

class User {
    float weight;
public:
    User(float weight) { this->weight = weight; }
    User& compare(User &other) {
        return (this->weight > other.weight) ? *this : other;
    }
    void show() { cout << "Weight: " << weight << "kg" << endl; }
};

int main() {
    User u1(75.5), u2(82.0);
    cout << "Heavier user ";
    u1.compare(u2).show();
    return 0;
}
