#include <string>
#include <iostream>

using namespace std;

class Vehicle
{
public:
  enum VehicleType
  {
    Benz,
    BMW,
    Audi,
    RR
  };
  Vehicle(VehicleType t, double price, string n) : type(t), price(price), name(n)
  {
    cout << "Vehicle(VehicleType t, double price, string n) : type(t), price(price), name(n)" << endl;
  }

private:
  VehicleType type;
  double price;
  string name;
};