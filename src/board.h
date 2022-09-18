#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <string>

using namespace::std;

class Board
{
public:
    Board();
    ~Board();
    void displayBoard();

private:
    string playspace;
};

#endif // !BOARD_H
