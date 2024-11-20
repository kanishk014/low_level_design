#pragma once
#include "Board.hpp"
#include "Dice.hpp"
#include "Player.hpp"

class Game {
  public:
  Board *board;
  Dice *dice;
  deque<Player*> playersList;
  Player *winner;

  Game() {
    board = new Board(10, 5, 4);
    dice = new Dice(1);
    winner = NULL;
    
    playersList.push_back(new Player(1, 0));
    playersList.push_back(new Player(2, 0));    
  }

  void startGame() {
    while (winner == NULL) {
      Player* player = findPlayerTurn();
      cout << player->id << " player is playing and current position is: "  << player->currentPosition << endl;

      int rollDiceSum = dice->rollDice();

      int newPlayerPosition = player->currentPosition + rollDiceSum;
      newPlayerPosition = jumpCheck(newPlayerPosition);

      player->currentPosition = newPlayerPosition;

      cout << player->id << " player is playing and new position is: "  << player->currentPosition << endl;

      if (newPlayerPosition >= board->board.size() * board->board.size()) {
        winner = player;
      }
    }

    cout << "Winner of the game is: Player " << winner->id << endl;
  }

  int jumpCheck(int newPosition) {
    if (newPosition >= (board->board.size() * board->board.size())) {
      return newPosition;
    }

    Cell *cell = board->board[newPosition / 10][newPosition % 10];

    if (cell->jump == NULL) return newPosition;

    if (cell->jump->start == newPosition) {
      string jumpBy = (cell->jump->start < cell->jump->end) ? "ladder" : "snake";
      cout << "Jump done by: " << jumpBy << endl;

      return cell->jump->end;
    }

    return newPosition;
  }

  Player* findPlayerTurn() {
    Player* current_player = playersList.front();
    playersList.pop_front();
    playersList.push_back(current_player);
    
    return current_player;
  }
};