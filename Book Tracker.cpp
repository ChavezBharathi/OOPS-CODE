#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
public:
    Book(string t) : title(t) {
        cout << "System: Book '" << title << "' added to database." << endl;
    }
    ~Book() {
        cout << "System: Memory cleared for '" << title << "'." << endl;
    }
};

int main() {
    { Book b1("C++ Primer"); } // Destructor called when scope ends
    return 0;
}
