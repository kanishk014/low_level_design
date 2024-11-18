#pragma once
#include "BasePizza.hpp"

class VeggieDelight : public BasePizza
{
  int cost()
  {
    return 200;
  }
};