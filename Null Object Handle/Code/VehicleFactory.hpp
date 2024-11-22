#pragma once
#include "Car.hpp"
#include "NullObject.hpp"
#include <string>

class VehicleFactory
{
  public:
  static VehicleInterface *getVehicle(std::string vehType)
  {
    if (vehType == "Car")
    {
      return new Car();
    }

    return new NullObject();
  }
};