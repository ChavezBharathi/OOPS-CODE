#include <iostream>
using namespace std;

int main() {
    double num, den;
    cout << "Enter numerator and denominator: ";
    cin >> num >> den;

    try {
        if (den == 0) {
            throw "Error: Division by zero is not allowed!";
        }
        cout << "Result: " << (num / den) << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}

