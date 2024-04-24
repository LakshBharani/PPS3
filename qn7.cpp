#include <iostream>
using namespace std;

class Vehicle {
public:
  int maxSpeed;
  int presentSpeed;
  Vehicle(int maxSpeed, int presentSpeed) {
    this->maxSpeed = maxSpeed;
    this->presentSpeed = presentSpeed;
  }
  void display() {
    cout << "Max Speed: " << maxSpeed << endl;
    cout << "Present Speed: " << presentSpeed << endl;
  }
};

class Car : public Vehicle {
public:
  int wheels;
  Car(int maxSpeed, int presentSpeed, int wheels)
      : Vehicle(maxSpeed, presentSpeed) {
    this->wheels = wheels;
  }
  void display() {
    Vehicle::display();
    cout << "Wheels: " << wheels << endl;
  }
};

class Plane : public Vehicle {
public:
  int altitude;
  Plane(int maxSpeed, int presentSpeed, int altitude)
      : Vehicle(maxSpeed, presentSpeed) {
    this->altitude = altitude;
  }
  void display() {
    Vehicle::display();
    cout << "Altitude: " << altitude << endl;
  }
};

int main() {
  Car c(200, 100, 4);
  Plane p(500, 300, 10000);
  c.display();
  p.display();
  return 0;
}
