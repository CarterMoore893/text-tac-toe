/******************************************************************************
  Board.cpp
******************************************************************************/
#include "board.h"
#include <iostream>
#include <string>

using namespace::std;

Board::Board()
{
    playspace = " | | \n-+-+-\n | | \n-+-+-\n | | ";
}

Board::~Board()
{
}

void Board::displayBoard()
{
    std::cout << playspace << std::endl;
}
