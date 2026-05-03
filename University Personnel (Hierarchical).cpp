#include <iostream>
#include <string>
using namespace std;

class Member {
protected:
    string name;
    int id;
public:
    void setBasicInfo() {
        cout << "Enter Name: "; cin >> name;
        cout << "Enter ID: "; cin >> id;
    }
};

class Student : public Member {
    float gpa;
public:
    void setGPA() { cout << "Enter GPA: "; cin >> gpa; }
    void display() { cout << "Student: " << name << " | GPA: " << gpa << endl; }
};

class Faculty : public Member {
    string dept;
public:
    void setDept() { cout << "Enter Dept: "; cin >> dept; }
    void display() { cout << "Faculty: " << name << " | Dept: " << dept << endl; }
};

int main() {
    Student s; Faculty f;
    s.setBasicInfo(); s.setGPA();
    f.setBasicInfo(); f.setDept();
    s.display(); f.display();
    return 0;
}
