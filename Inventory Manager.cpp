#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Product {
    string name;
    double price;
};

bool comparePrice(Product a, Product b) { return a.price > b.price; }

int main() {
    vector<Product> items = {{"Phone", 500}, {"Laptop", 1200}, {"Watch", 200}};
    sort(items.begin(), items.end(), comparePrice);

    for (auto i : items) cout << i.name << ": $" << i.price << endl;
    return 0;
}
