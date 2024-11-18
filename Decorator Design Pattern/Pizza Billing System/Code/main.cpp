#include <bits/stdc++.h>
#include "MargheritaPizza.hpp"
#include "VeggieDelight.hpp"
#include "./Decorator/ExtraCheeseTopping.hpp"
#include "./Decorator/MushroomTopping.hpp"

using namespace std;

int main()
{
  BasePizza *customPizza = new ExtraCheeseTopping(new MushroomTopping(new MargheritaPizza));

  cout << "Your customized pizza cost is: " << customPizza->cost() << endl;

  return 0;
}