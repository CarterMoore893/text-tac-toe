#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <string>

using namespace::std;

typedef enum eCell {
    Top_Left  =  0,
    Top_Cent  =  2,
    Top_Right =  4,
    Mid_Left  = 14,
    Mid_Cent  = 16,
    Mid_Right = 18,
    Bot_Left  = 28,
    Bot_Cent  = 30,
    Bot_Right = 32
}eCell;

class Board
{
public:
    Board();
    ~Board();
    void displayBoard();
    void placeSymbol();

private:
    string playspace;
    int updateBoard(string symbol, eCell location);
};

#endif // !BOARD_H
