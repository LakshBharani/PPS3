#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  int id;
  int age;

public:
  void getStu() {
    cout << "Enter name, id, age: ";
    cin >> name >> age >> id;
  }
  void putStu() {
    cout << "Name: " << name << endl
         << "Id: " << id << endl
         << "Age: " << age << endl;
  }
};

class Undergraduate : public Student {
private:
  int numOffered;

public:
  void getUGCourses() {
    cout << "Enter num of UG courses: ";
    cin >> numOffered;
  }
  void putUGCourses() {
    cout << "Num of UG Courses offered: " << numOffered << endl;
  }
};

class Postgraduate : public Student {
private:
  int numOffered;

public:
  void getPGCourses() {
    cout << "Enter num of PG courses: ";
    cin >> numOffered;
  }
  void putPGCourses() {
    cout << "Num of PG Courses offered: " << numOffered << endl;
  }
};

int main() {
  Postgraduate pg;
  Undergraduate ug;

  pg.getStu();
  pg.getPGCourses();
  ug.getUGCourses();
  cout << "--- x ---" << endl;
  pg.putStu();
  pg.putPGCourses();
  ug.putUGCourses();

  return 0;
}
