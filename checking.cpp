#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Function to set account details
    void setAccountDetails(int accNumber, double initialBalance);

    // Function to deposit money
    void deposit(double amount);

    // Function to withdraw money
    void withdraw(double amount);

    // Function to display account details
    void displayAccountDetails() const;
};

// Implementing the function to set account details
void BankAccount::setAccountDetails(int accNumber, double initialBalance) {
    accountNumber = accNumber;
    balance = initialBalance;
}

// Implementing the deposit function
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

// Implementing the withdraw function
void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrew: $" << amount << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance!" << endl;
    } else {
        cout << "Invalid withdrawal amount!" << endl;
    }
}

// Implementing the function to display account details
void BankAccount::displayAccountDetails() const {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: $" << balance << endl;
}

// Main function to demonstrate the class
int main() {
    // Creating an object of BankAccount
    BankAccount myAccount;

    // Set account details
    myAccount.setAccountDetails(123456, 500.0);

    // Display initial account details
    myAccount.displayAccountDetails();
    cout << endl;

    // Perform some transactions
    myAccount.deposit(150.0);
    myAccount.withdraw(100.0);
    myAccount.withdraw(600.0);  // Attempt to withdraw more than balance

    cout << endl;
    // Display final account details
    myAccount.displayAccountDetails();

    return 0;
}
