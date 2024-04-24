#include <iostream>
using namespace std;

class BankAccount {
protected:
  string accountNumber;
  string accountHolder;
  double balance;

public:
  BankAccount(string accountNumber, string accountHolder, double balance)
      : accountNumber(accountNumber), accountHolder(accountHolder),
        balance(balance) {}

  void deposit(double amount) { balance += amount; }

  void withdraw(double amount) {
    if (balance >= amount) {
      balance -= amount;
    } else {
      cout << "Insufficient balance" << endl;
    }
  }

  void display() {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder: " << accountHolder << endl;
    cout << "Balance: " << balance << endl;
  }
};

class SavingsAccount : public BankAccount {
  double interestRate;
};
