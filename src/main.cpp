/*******************************************************************************
  main.cpp
  A console-based tic-tac-toe game. Human vs. random selection
*******************************************************************************/
#include <iostream>
#include <string>

using namespace::std;

int main (void)
{
    // TODO: Write out game flow. Get a good feel for what's needed for 
    // functions, objects, methods, etc.

    // do-while menus
    bool play = true;
    string strIn;

    do {
        cout << "\n\n\nMain menu" << endl;
        cout << "Make a selection:" << endl;
        cout << "0. Quit the game." << endl;
        cout << "\n\n\nInput: ";

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
            std::cerr << "Invalid argument: " << ia.what() << '\n';
        }

    } while (play);

    return 0;
}
