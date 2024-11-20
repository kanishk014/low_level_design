#pragma once

class Player
{
  public:
  int id;
  int currentPosition;

  Player(int id, int currentPosition)
  {
    this->id = id;
    this->currentPosition = currentPosition;
  }
};