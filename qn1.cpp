#include <iostream>
#include <ostream>
#include <string>
using namespace std;

class Student {
private:
  int id;
  string name;

public:
  void getstu() {
    cout << "Enter id and name: ";
    cin >> id >> name;
  };
  void putstu() { cout << "id: " << id << endl << "name: " << name << endl; };
};

class Marks : public Student {
protected:
  float marks[3];

public:
  void getmarks() {
    cout << "Enter marks m1, m2, m3: ";
    for (int i = 0; i < 3; i++) {
      cin >> marks[i];
    }
  };
  void putmarks() {
    cout << "Marks: " << endl;
    for (int i = 0; i < 3; i++) {
      cout << marks[i] << " ";
    }
    cout << endl;
  };
};

class Result : public Marks {
private:
  float total, average;

public:
  void show() {
    total = 0;
    for (int i = 0; i < 3; i++) {
      total += marks[i];
    }
    average = total / 3;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
  }
};

int main() {
  Result r;
  r.getstu();
  r.getmarks();
  cout << "---- x ---" << endl;
  r.putstu();
  r.putmarks();
  r.show();
  return 0;
}
