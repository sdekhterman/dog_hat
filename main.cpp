#include <iostream>
#include "doggo.h"

using namespace std;

int main() {
    // create object and var for later 
    Doggo dog;
    int userInt;

    // program navigation instructions
    cout << " --------------------------------------------------------------------" << endl;
    cout << "          _ __ _                              "   << endl;
    cout << "         |      |                             "   << endl;
    cout << "        ----------                            "   << endl;
    cout << "          /\\___/\\                             " << endl;
    cout << "         / o   o \\                            "  << endl;
    cout << "        /  . @ .  \\_____________________     "   << endl;
    cout << "        |   '''                       | \\   "    << endl;
    cout << "        |                             | |    "    << endl;
    cout << "        |                             | |    "    << endl;
    cout << "         \\                ___    _    |/     "   << endl;
    cout << "          \\   |  ________/   \\  | \\   |   d  " << endl;
    cout << "           |__|__|           |__|  |__|  sam " << endl;
    cout << "Press Enter to advance the text and enter an integer when prompted." << endl;
    cout << " --------------------------------------------------------------------" << endl;

    // instruct the user, get their input, and store it
    cout << "There is a dog!" << endl;
    cout << "Would you like to give the dog a hat? [yes (1)/ no (0)]" << endl;
    cin >> userInt;
    dog.setDogHat(userInt);

    // provide story based on user integer input
    switch(dog.getDogHat()){
        case 1:
            cout << "The dog likes the hat! <3" << endl;
            break;
        case 0:
            getchar();
            cout << "The hat is ticking?!" << endl;
            getchar();
            cout << "." << endl;
            getchar();
            cout << ".." << endl;
            getchar();
            cout << "..." << endl;
            getchar();
            cout << "BOOM" << endl;
            getchar();
            cout << "You saved the dog's life." << endl;
            break;
        default:
            cout << "The dog vanishes." << endl;
    }
    return 0;
}
