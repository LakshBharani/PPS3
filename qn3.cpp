#include <iostream>
using namespace std;

class DM;
class DB {
private:
  int feet;
  double inches;
  friend void add(DB, DM);

public:
  void takeInp() {
    cout << "DB (ft, in): ";
    cin >> feet >> inches;
  };
};

class DM {
private:
  int metres;
  double centimetres;
  friend void add(DB, DM);

public:
  void takeInp() {
    cout << "DM (m, cm): ";
    cin >> metres >> centimetres;
  }
};

void add(DB db, DM dm) {
  double total = 0;
  total += db.feet * 30 + db.inches * 2.54 + dm.metres * 100 + dm.centimetres;
  cout << "Total: " << total << endl;
}

int main() {
  DB db;
  DM dm;
  db.takeInp();
  dm.takeInp();
  add(db, dm);
  return 0;
}
