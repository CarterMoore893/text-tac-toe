#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <string>

using namespace::std;

typedef enum Cell {
    tl = 0,
    tc = 2,
    tr = 4,
     l = 14,
     c = 16,
     r = 18,
    bl = 28,
    bc = 30,
    br = 32
}Cell;

class Board
{
public:
    Board();
    ~Board();
    void displayBoard();
    void testUpdate();

private:
    string playspace;
    int updateBoard(string symbol, Cell location);
};

#endif // !BOARD_H
