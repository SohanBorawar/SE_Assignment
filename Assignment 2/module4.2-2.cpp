#include <iostream>
#include <string>
using namespace std;
class Account {
private:
    string Name;
    string accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the account
    Account(const string& name, const string& accNumber, const string& accType, double initialBalance) {
        Name = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Member function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited" << amount << ". New balance:" << balance << endl;
        } else {
            cout << "Invalid deposit amount. Amount must be greater than 0." << endl;
        }
    }

    // Member function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrew " << amount << ". New balance:" << balance << endl;
            } else {
                cout << "Insufficient balance." << std::endl;
            }
        } else {
            cout << "Invalid withdrawal amount. Amount must be greater than 0." << endl;
        }
    }

    // Member function to display name and balance
    void displayBalance() {
        cout << "Account holder: " << Name << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Account type: " << accountType << endl;
        cout << "Current balance:" << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object
    Account account1("Sohan", "1234567890", "Savings", 1000.0);

    // Deposit some money
    account1.deposit(500);

    // Withdraw some money
    account1.withdraw(200);

    // Display account information and balance
    account1.displayBalance();

    return 0;
}
