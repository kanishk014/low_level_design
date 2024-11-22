#pragma once
#include "VehicleInterface.hpp"

class NullObject : public VehicleInterface {
  // You can define any default behaviour in NULL Object

  int getTankCapacity() {
    return 0;
  }

  int getSeatingCapacity() {
    return 0;
  }
};
