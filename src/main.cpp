/*******************************************************************************
  main.cpp
  A console-based tic-tac-toe game. Human vs. random selection
*******************************************************************************/
#include "menu.h"
#include "board.h"

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
    bool play = true;
    string strIn;

    do {
        mainMenu();
        cout << "\n\n\nInput: ";
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

        // (DD) Test displayBoard
        Board myBoard;
        myBoard.displayBoard();
        myBoard.placeSymbol();
        myBoard.displayBoard();

    } while (play);

    return 0;
}
