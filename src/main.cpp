/* ****************************************************************
 * @author: <Mark Gerone F. Grospe>
 * @app name: <Tell Switch case>
 * @app desc: <A program that divide the two floating points entered>
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
    float inputFirst;
    float inputSecond;

    cout << "This programs performs simple division of two numbers. \n";

    cout << "Please enter the first number: ";
    cin >> inputFirst;
    cout << "Please enter the second number: ";
    cin >> inputSecond;

    float inputQuotient = inputFirst/inputSecond;

    cout << "\nGreat! \n";
    cout << inputFirst << " divided by " <<  inputSecond << " is equals to " << inputQuotient << "\n\n";
   

    cin.ignore();
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
