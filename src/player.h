/*******************************************************************************
  player.h
*******************************************************************************/
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "board.h"

using std::string;

class Player
{
public:
    Player();
    Player(Player &&) = default;
    Player(const Player &) = default;
    Player &operator=(Player &&) = default;
    Player &operator=(const Player &) = default;
    ~Player();

private:
    string symbol;
    // bool isLegalMove()
    int placeToken(Board b, string symbol, eCell position);
};

#endif // !PLAYER_H
