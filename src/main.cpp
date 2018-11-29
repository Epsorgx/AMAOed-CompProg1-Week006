/* ****************************************************************
 * @author: <Mark Gerone F. Grospe>
 * @app name: <Tell If>
 * @app desc: <A program that will accept and integer and execute command based on the input using IF statements>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
    int user_input;

    cout << "Hi, there! \nPlease enter a number from 0 to 4 and i will say something: ";
    cin >> user_input;

    if (user_input == 0) {
        cout << "\nHello world\n\n";
    } else if (user_input == 1) {
        cout << "\nI am Groot\n\n";
    } else if (user_input == 2) {
        cout << "\nTo the top\n\n";
    } else if (user_input == 3) {
        cout << "\nWhere is the horizon\n\n";
    } else if (user_input == 4) {
        cout << "\nI do not know\n\n";
    }
    else {
        cout << "\nYeah, I will \n\n";
    }

    cin.ignore();
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
