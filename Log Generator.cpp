#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream out("users.txt");
    out << "Alice\nBob\nAndrew\nCharlie";
    out.close();

    ifstream in("users.txt");
    ofstream filtered("filtered_users.txt");
    string name;

    while (in >> name) {
        if (name[0] == 'A') filtered << name << endl;
    }
    cout << "Filtered list created in filtered_users.txt" << endl;
    return 0;
}
