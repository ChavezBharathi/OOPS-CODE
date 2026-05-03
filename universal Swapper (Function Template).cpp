#include <iostream>
using namespace std;

// Template function to swap any data type
template <typename T>
void universalSwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    universalSwap(x, y);
    cout << "Integers: " << x << ", " << y << endl;

    string s1 = "World", s2 = "Hello";
    universalSwap(s1, s2);
    cout << "Strings: " << s1 << ", " << s2 << endl;
    return 0;
}
