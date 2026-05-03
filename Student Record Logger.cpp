#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int roll;

    // Writing to a file
    ofstream outFile("records.txt");
    cout << "Enter Name and Roll No to save: ";
    cin >> name >> roll;
    outFile << name << " " << roll << endl;
    outFile.close();

    // Reading from the file
    ifstream inFile("records.txt");
    string rName; int rRoll;
    if (inFile >> rName >> rRoll) {
        cout << "Data retrieved from file: " << rName << " (" << rRoll << ")" << endl;
    }
    inFile.close();
    return 0;
}
