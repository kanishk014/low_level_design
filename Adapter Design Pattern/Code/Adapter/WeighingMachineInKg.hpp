#pragma once
#include "WeighingMachineAdapterInterface.hpp"
#include "../Adaptee/WeighingMachineInterface.hpp"

class WeighingMachineInKg : public WeighingMachineAdapterInterface {
  public:
  WeighingMachineInterface *weightMachine;

  WeighingMachineInKg(WeighingMachineInterface *weightMachine) {
    this->weightMachine = weightMachine;
  }

  double getWeightInKg() {    
    double weight = weightMachine->getWeightInPounds();

    // Conver weight in KG
    double weightInKg = weight * 0.45;

    return weightInKg;
  }
};