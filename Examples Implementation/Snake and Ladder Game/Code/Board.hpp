#pragma once
#include <bits/stdc++.h>
#include "Cell.hpp"
#include "Jump.hpp"

using namespace std;

class Board
{
public:
  vector<vector<Cell *>> board;

  Board(int n, int numLadder, int numSnakes)
  {
    board.resize(n, vector<Cell *>(n, NULL));

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        board[i][j] = new Cell();
      }
    }

    addSnakesLadders(numLadder, numSnakes);
  }

  void addSnakesLadders(int numLadder, int numSnakes)
  {
    srand(time(0));
    int totalCells = board.size() * board.size();

    for (int i = 0; i < numLadder; i++)
    {
      int temp_start = rand() % totalCells;
      int temp_end = rand() & totalCells;

      if (temp_start >= temp_end)
        continue;

      Cell *current_cell = getCell(temp_start, board.size());
      current_cell->jump = new Jump(temp_start, temp_end);
    }

    for (int i = 0; i < numSnakes; i++)
    {
      int temp_start = rand() % totalCells;
      int temp_end = rand() & totalCells;

      if (temp_start <= temp_end)
        continue;

      Cell *current_cell = getCell(temp_start, board.size());
      current_cell->jump = new Jump(temp_start, temp_end);
    }
  }

  Cell *getCell(int start, int n)
  {
    int x = start / 10;
    int y = start % 10;

    return board[x][y];
  }
};