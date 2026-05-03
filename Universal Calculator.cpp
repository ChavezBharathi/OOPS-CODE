#include <iostream>
using namespace std;

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    cout << "Int: " << multiply(5, 4) << endl;
    cout << "Double: " << multiply(2.5, 4.2) << endl;
    return 0;
}
