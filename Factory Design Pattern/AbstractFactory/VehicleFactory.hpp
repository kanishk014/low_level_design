#pragma once
#include "VehicleInterface.hpp"

class VehicleFactory {
  public:
  virtual VehicleInterface* getVehicle(string) = 0;
};