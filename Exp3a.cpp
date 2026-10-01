#include <iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(int acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
    }
    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    BankAccount b(101, 5000);
    b.deposit(2000);
    b.withdraw(1000);
    b.displayBalance();
    return 0;
}