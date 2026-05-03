#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder = "John Doe";
    double balance = 5400.75;

    // Granting Auditor class access to private members
    friend class Auditor;
};

class Auditor {
public:
    void generateReport(BankAccount& acc) {
        cout << "--- Audit Report ---" << endl;
        cout << "Account Holder: " << acc.accountHolder << endl;
        cout << "Verified Balance: $" << acc.balance << endl;
    }
};

int main() {
    BankAccount myAccount;
    Auditor admin;
    admin.generateReport(myAccount);
    return 0;
}
