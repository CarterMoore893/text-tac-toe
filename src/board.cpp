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
    //                     1         2         3
    //          "012345678901234567890123456789012
}

Board::~Board()
{
}

void Board::displayBoard()
{
    std::cout << playspace << std::endl;
}

int Board::updateBoard(string symbol, Cell location)
{
    this->playspace.replace(location, 1, symbol);
    // The string version of playspace[location] = symbol;


    return 0;
}

// TODO: Look up how to go about setting up a proper testing workflow
void Board::testUpdate()
{
    this->updateBoard("X", tl);
}
