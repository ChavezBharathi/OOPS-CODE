#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;
    int pin;
public:
    BankAccount(double b, int p) : balance(b), pin(p) {}

    friend void validateTransaction(BankAccount obj, double amount, int enteredPin);
};

void validateTransaction(BankAccount obj, double amount, int enteredPin) {
    if (enteredPin == obj.pin) {
        if (amount <= obj.balance) {
            cout << "Transaction Approved! New Balance: " << (obj.balance - amount) << endl;
        } else {
            cout << "Transaction Failed: Insufficient funds." << endl;
        }
    } else {
        cout << "Transaction Failed: Incorrect PIN." << endl;
    }
}

int main() {
    BankAccount user1(5000.0, 1234);
    validateTransaction(user1, 1500.0, 1234);
    return 0;
}
