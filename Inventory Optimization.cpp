#include <iostream>
using namespace std;

class Product {
    float price;
public:
    Product(float price) { this->price = price; }
    Product& comparePrice(Product &p) {
        if (this->price < p.price) return *this;
        else return p;
    }
    void display() { cout << "Selected Product Price: $" << price << endl; }
};

int main() {
    Product p1(45.0), p2(32.5);
    Product cheaper = p1.comparePrice(p2);
    cheaper.display();
    return 0;
}
