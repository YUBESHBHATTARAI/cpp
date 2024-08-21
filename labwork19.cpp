/*
19.Define a class BankAccount with data members for the account number
and balance. Implement member functions to deposit and withdraw money, defined outside the class using the scope resolution operator. Create an object and perform some transactions to demonstrate these  functions.
*/
#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    double balance;

public:
    BankAccount(int accNumber, double initialBalance)
        : accountNumber(accNumber), balance(initialBalance) {}

    void deposit(double amount) { 
        balance += amount;
         }
    void withdraw(double amount) { 
        balance -= (amount <= balance) ? amount : 0; 
        }

    void display() const {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount(123456, 500.0);
    
    myAccount.display();
    myAccount.deposit(200.0);
    myAccount.display();
    myAccount.withdraw(150.0);
    myAccount.display();
    myAccount.withdraw(600.0); // Attempt to withdraw more than balance
    myAccount.display();

    return 0;
}
