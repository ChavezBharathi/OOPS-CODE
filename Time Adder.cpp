#include <iostream>
using namespace std;

class Time {
    int hrs, mins;
public:
    Time(int h=0, int m=0) : hrs(h), mins(m) {}
    Time operator + (const Time& t) {
        int totalMins = mins + t.mins;
        int totalHrs = hrs + t.hrs + (totalMins / 60);
        return Time(totalHrs, totalMins % 60);
    }
    void display() { cout << hrs << "h " << mins << "m" << endl; }
};

int main() {
    Time t1(2, 45), t2(1, 30);
    Time t3 = t1 + t2;
    t3.display();
    return 0;
}
