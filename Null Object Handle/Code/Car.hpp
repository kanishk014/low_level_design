#pragma once
#include "VehicleInterface.hpp"

class Car : public VehicleInterface
{
public:
  int getTankCapacity()
  {
    return 100;
  }

  int getSeatingCapacity()
  {
    return 4;
  }
};