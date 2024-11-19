#include <bits/stdc++.h>
#include "VehicleFactory.hpp"
#include "LuxuryVehicle.hpp"
#include "OrdinaryVehicle.hpp"

using namespace std;

int main()
{
  VehicleFactory *vfLuxuy = new LuxuryVehicle();
  VehicleInterface *vehicle1 = vfLuxuy->getVehicle("bmw");

  VehicleFactory *vfOrdinary = new OrdinaryVehicle();
  VehicleInterface *vehicle2 = vfOrdinary->getVehicle("swift");

  vehicle1->createVehicle();
  vehicle2->createVehicle();
  return 0;
}