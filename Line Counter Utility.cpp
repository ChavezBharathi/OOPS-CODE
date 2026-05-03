#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.txt"); // Ensure data.txt exists in the directory
    string line;
    int count = 0;

    if (!file) {
        cout << "Error: File not found!" << endl;
        return 1;
    }

    while (getline(file, line)) {
        count++;
    }

    cout << "Total lines in file: " << count << endl;
    file.close();
    return 0;
}
