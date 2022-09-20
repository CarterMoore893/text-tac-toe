/******************************************************************************
  Board.cpp
******************************************************************************/
#include "board.h"

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
    std::cout << '\n' << playspace << '\n' << std::endl;
}

int Board::updateBoard(string symbol, eCell location)
{
    this->playspace.replace(location, 1, symbol);
    // The string version of playspace[location] = symbol;

    return 0;
}

// TODO: Look up how to go about setting up a proper testing workflow
void Board::placeSymbol()
{
    this->updateBoard("X", Top_Left);
}
