#pragma once
#include "VehicleInterface.hpp"

class Alto : public VehicleInterface {
  void createVehicle() {
    std::cout << "Alto created" << std::endl;
  }
};