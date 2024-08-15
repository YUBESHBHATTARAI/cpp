/*
19.Define a class BankAccount with data members for the account number
and balance. Implement member functions to deposit and withdraw money, defined outside the class using the scope resolution operator. Create an object and perform some transactions to demonstrate these  functions.
*/
#include<iostream>
using namespace std;
class BankAccount{
 int accountnumber;
 double balance;
 public:
  void Input(int accNumber, double initialBalance);
  void Deposit(double amount);
  void withdraw(double amount);
  void Display();
   
};
 void BankAccount::Input (int accNumber, double initialBalance){
    cout<<"Enter the Account number and Balance"<<endl;
    cin>> accNumber>>initialBalance;
  }

    void BankAccount::Deposit(double amount);{
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
    }
   void BankAccount:: withdraw(){
     if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrew: $" << amount << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance!" << endl;
    } else {
        cout << "Invalid withdrawal amount!" << endl;
    }
  }
      void BankAccount:: Display(){
     cout<<"The withdrawn money is  "<<bal<<endl;
    }
      
int main(){
    BankAccount b;
    b.Input();    
    b.withdraw();
    b.Display();
    return 0;
}