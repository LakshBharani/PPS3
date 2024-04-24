#include <iostream>
#include <string>
using namespace std;

class Courier {
protected:
  int courierId;
  string name_of_courier;
  double base_fare;

  void takeInp() {
    cout << "Enter ID: ";
    cin >> courierId;
    cout << "Enter Name: ";
    cin >> name_of_courier;
    cout << "Enter base fare: ";
    cin >> base_fare;
  };

  void printBill(double base_fare) {
    cout << "ID: " << courierId << endl;
    cout << "Name of courier: " << name_of_courier << endl;
    cout << "Shipping Cost: " << base_fare + 30 << endl;
  };
};

class Internatial_services : protected Courier {
private:
  string destination;
  double weight;

public:
  void finalBill() {
    takeInp();
    cout << "Enter destination: ";
    cin >> destination;
    cout << "Enter weight: ";
    cin >> weight;

    double total_shipping = base_fare * weight;

    cout << "--- x ---" << endl;

    cout << "ID: " << courierId << endl
         << "Name of courier: " << name_of_courier << endl
         << "Destination: " << destination << endl
         << "Weight: " << weight << endl
         << "Total shipping cost: " << total_shipping << endl;

    if (total_shipping > 100) {
      cout << "More sale" << endl;
    } else {
      cout << "Less sale" << endl;
    }
  };
};

int main() {
  Internatial_services i;
  i.finalBill();
  return 0;
}
