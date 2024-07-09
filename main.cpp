#include <iostream>
#include "doggo.h"

using namespace std;

int main() {
    // create object and var for later 
    Doggo dog;
    int userInt;

    // program navigation instructions
    cout << "----------------------------------------------------------------------" << endl;
    cout << "                    _ __ _                              " << endl;
    cout << "                   |      |                             " << endl;
    cout << "                  ----------                            " << endl;
    cout << "                    /\\___/\\                           " << endl;
    cout << "                   / o   o \\                           " << endl;
    cout << "                  /  . @ .  \\_____________________     " << endl;
    cout << "                  |   '''                       | \\    " << endl;
    cout << "                  |                             | |     " << endl;
    cout << "                  |                             | |     " << endl;
    cout << "                   \\                ___    _    |/     " << endl;
    cout << "                    \\   |  ________/   \\  | \\   |   d" << endl;
    cout << "                     |__|__|           |__|  |__|  sam  " << endl << endl;
    cout << "Press 1 for yes and 2 for no when prompted. 'Enter' advances the text." << endl;
    cout << "----------------------------------------------------------------------" << endl;

    //  instruct the user, get their input, and store it
    cout << "There is a dog!" << endl;
    cout << "Would you like to give the dog a hat? [1 or 2]" << endl;
    cin >> userInt;
    dog.setDogHat(userInt);

    // provide story based on user integer input
    switch(dog.getDogHat()){
        case 1:
            cout << "The dog likes the hat! <3" << endl;
            break;
        case 2:
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
