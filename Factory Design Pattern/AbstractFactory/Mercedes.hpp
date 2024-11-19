#pragma once
#include "VehicleInterface.hpp"

class Mercedes : public VehicleInterface
{
  void createVehicle()
  {
    cout << "Mercedes created" << endl;
  }
};