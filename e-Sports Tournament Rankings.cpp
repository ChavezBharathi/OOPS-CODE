#include <iostream>
#include <string>
using namespace std;

class Player {
    string name;
    int score;
public:
    void setData(string name, int score) {
        this->name = name; // Using this pointer
        this->score = score;
    }
    int getScore() { return score; }
    string getName() { return name; }
};

int main() {
    Player team[3];
    team[0].setData("Ace", 450);
    team[1].setData("Shadow", 520);
    team[2].setData("Titan", 390);

    Player* top = &team[0];
    for(int i = 1; i < 3; i++) {
        if(team[i].getScore() > top->getScore()) top = &team[i];
    }
    cout << "Top Scorer: " << top->getName() << " with " << top->getScore() << endl;
    return 0;
}
