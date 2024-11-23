#pragma once
#include "WeighingMachineInterface.hpp"

class WeighingMachineForBabies : public WeighingMachineInterface
{
public:
  double getWeightInPounds()
  {
    return 28.0;
  }
};