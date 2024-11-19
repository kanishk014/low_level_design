#pragma once
#include "VehicleInterface.hpp"

class BMW : public VehicleInterface
{
  void createVehicle()
  {
    std::cout << "BMW is created" << std::endl;
  }
};