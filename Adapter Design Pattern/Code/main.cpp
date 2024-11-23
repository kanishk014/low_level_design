#include <bits/stdc++.h>
#include "Adapter/WeighingMachineAdapterInterface.hpp"
#include "Adapter/WeighingMachineInKg.hpp"
#include "Adaptee/WeighingMachineForBabies.hpp"

using namespace std;

int main() {
  WeighingMachineAdapterInterface* adapter = new WeighingMachineInKg(new WeighingMachineForBabies());
  cout << adapter->getWeightInKg() << endl;

  return 0;
}