#pragma once
#include "VehicleFactory.hpp"
#include "Alto.hpp"
#include "Swift.hpp"

class OrdinaryVehicle : public VehicleFactory
{
  VehicleInterface *getVehicle(string input)
  {
    if (input == "alto")
    {
      return new Alto();
    }
    else if (input == "swift")
    {
      return new Swift();
    }
  }
};