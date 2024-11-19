#pragma once
#include "VehicleInterface.hpp"

class Swift : public VehicleInterface
{
  void createVehicle()
  {
    cout << "Swift is created" << endl;
  }
};