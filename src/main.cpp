/*******************************************************************************
  main.cpp
  A console-based tic-tac-toe game. Human vs. random selection
*******************************************************************************/
#include <iostream>
#include <string>
#include "board.h"

using namespace::std;

int main (void)
{
    bool play = true;
    string strIn;

    do {
        // Print menu items
        cout << "\n\n\nMain menu" << endl;
        cout << "Make a selection:" << endl;
        cout << "0. Quit the game." << endl;
        cout << "\n\n\nInput: ";
        // (DD) Test displayBoard
        Board myBoard;
        myBoard.displayBoard();
        myBoard.testUpdate();
        myBoard.displayBoard();

        // Handle user input and exeptions
        cin >> strIn;
        try {
            int numSelect = stoi(strIn);
            switch (numSelect) {
                case 0: play = false;
                        break;
                default:
                        cout << "Please select a valid menu option." << endl;
            }
        }
        catch (const std::invalid_argument& ia) {
            cout << "Please select a valid menu option." << endl;
        }

    } while (play);

    return 0;
}
