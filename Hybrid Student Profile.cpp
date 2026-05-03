#include <iostream>
#include <string>
using namespace std;

class AcademicRecord {
public:
    float gpa = 3.9;
    void showAcademic() { cout << "Academic GPA: " << gpa << endl; }
};

class SportsRecord {
public:
    int medals = 3;
    void showSports() { cout << "Sports Medals: " << medals << endl; }
};

// Derived from two base classes
class StudentProfile : public AcademicRecord, public SportsRecord {
public:
    string name = "chavez";
    void displayFullProfile() {
        cout << "Student: " << name << endl;
        showAcademic();
        showSports();
    }
};

int main() {
    StudentProfile profile;
    profile.displayFullProfile();
    return 0;
}
