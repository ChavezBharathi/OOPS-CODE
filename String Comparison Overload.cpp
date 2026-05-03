#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char str[100];
public:
    MyString(const char* s) { strcpy(str, s); }

    // Overloading '==' to compare strings
    bool operator==(const MyString& s) {
        return strcmp(str, s.str) == 0;
    }
};

int main() {
    MyString s1("GitHub"), s2("GitHub"), s3("Lab");
    if (s1 == s2) cout << "s1 and s2 are identical." << endl;
    if (!(s1 == s3)) cout << "s1 and s3 are different." << endl;
    return 0;
}
