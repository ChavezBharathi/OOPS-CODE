#include <iostream>
#include <fstream>
using namespace std;

struct PlayerData {
    int id;
    int level;
    float score;
};

int main() {
    PlayerData p1 = {101, 15, 950.5f};

    // Writing binary data
    ofstream outFile("save.dat", ios::binary);
    outFile.write(reinterpret_cast<char*>(&p1), sizeof(PlayerData));
    outFile.close();

    // Reading binary data
    PlayerData p2;
    ifstream inFile("save.dat", ios::binary);
    inFile.read(reinterpret_cast<char*>(&p2), sizeof(PlayerData));
    inFile.close();

    cout << "Loaded Player ID: " << p2.id << ", Score: " << p2.score << endl;

    return 0;
}
