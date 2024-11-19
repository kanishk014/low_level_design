#pragma once
#include "VehicleFactory.hpp"
#include "BMW.hpp"
#include "Mercedes.hpp"

class LuxuryVehicle : public VehicleFactory {
  public:
  VehicleInterface* getVehicle(string input) {
    if (input == "bmw") {
      return new BMW();
    }
    else if (input == "mercedes") {
      return new Mercedes();
    }
  }
};