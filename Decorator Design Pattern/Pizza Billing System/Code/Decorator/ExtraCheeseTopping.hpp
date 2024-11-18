#pragma once
#include "DecoratorPizzaInterface.hpp"

class ExtraCheeseTopping : public DecoratorPizzaInterface
{
public:
  BasePizza *basePizza;

  ExtraCheeseTopping(BasePizza *pizza)
  {
    this->basePizza = pizza;
  }

  int cost()
  {
    return basePizza->cost() + 15;
  }
};