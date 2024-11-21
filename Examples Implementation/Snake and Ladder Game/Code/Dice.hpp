#pragma once
#include <bits/stdc++.h>

class Dice
{
public:
  int count;

  Dice(int count)
  {
    this->count = count;
  }

  int rollDice()
  {
    int sum = 0;
    srand(time(0));
    for (int i = 0; i < count; i++)
    {
      sum += (rand() % 6) + 1;
    }

    return sum;
  }
};