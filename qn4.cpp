#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
  int number;
  string name;
  string designation;

protected:
  void getEmp() {
    cout << "Enter emp_number, name , designation: ";
    cin >> number >> name >> designation;
  };
  void showEmp() {
    cout << "Number: " << number << endl
         << "Name: " << name << endl
         << "Designation: " << designation << endl;
  };
};

class Salary : private Employee {
private:
  double basic_pay;
  double hra;
  double da;
  double pf;

protected:
  void showDetails() {
    double total_pay = basic_pay + hra + da + pf;
    showEmp();
    cout << "hra: " << hra << endl
         << "da: " << da << endl
         << "pf: " << pf << endl
         << "Net pay: " << total_pay << endl;
  };

  void getDetails() {
    getEmp();
    cout << "Enter basic_pay, hra , da, pf: ";
    cin >> basic_pay >> hra >> da >> pf;
  }
};

class Bank_details : private Salary {
private:
  string bank_name;
  int account_number;

public:
  void get() {
    getDetails();
    cout << "Enter bank_name, account_number: ";
    cin >> bank_name >> account_number;
  }

  void show() {
    cout << "Bank Name: " << bank_name << endl
         << "Account Number: " << account_number << endl;
    showDetails();
  };
};

int main() {
  Bank_details b;
  b.get();
  b.show();
  return 0;
}
