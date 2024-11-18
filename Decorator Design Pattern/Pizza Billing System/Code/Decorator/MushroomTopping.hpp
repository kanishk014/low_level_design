#pragma once
#include "DecoratorPizzaInterface.hpp"

class MushroomTopping : public DecoratorPizzaInterface
{
public:
  BasePizza *basePizza;

  MushroomTopping(BasePizza *pizza)
  {
    basePizza = pizza;
  }

  int cost()
  {
    return basePizza->cost() + 30;
  }
};