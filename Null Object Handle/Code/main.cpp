#include <bits/stdc++.h>
#include "VehicleFactory.hpp"
using namespace std;

int main()
{
  VehicleInterface *vehicle = VehicleFactory::getVehicle("Car");

  cout << vehicle->getSeatingCapacity() << endl;
  cout << vehicle->getTankCapacity() << endl;

  vehicle = VehicleFactory::getVehicle("Bike");

  // We do not have to handle if (vehicle != NULL) condition as if Bike is not present then
  // a NULL object containing default behaviour will be returned.

  cout << vehicle->getSeatingCapacity() << endl;
  cout << vehicle->getTankCapacity() << endl;

  return 0;
}