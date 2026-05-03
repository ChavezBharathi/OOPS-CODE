#include <iostream>
#include <exception>
using namespace std;

class InsufficientFundsException : public exception {
    const char* what() const noexcept override { return "Error: Insufficient Funds!"; }
};

void withdraw(int balance, int amount) {
    if (amount > balance) throw InsufficientFundsException();
    cout << "Withdrawal Successful: " << amount << endl;
}

int main() {
    try {
        withdraw(1000, 5000);
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
