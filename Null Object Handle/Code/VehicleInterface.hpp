#pragma once

class VehicleInterface {
  public:
  virtual int getTankCapacity() = 0;
  virtual int getSeatingCapacity() = 0;
};