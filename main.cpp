#include <iostream>
#include "doggo.h"

using namespace std;

int main() {
    // create object and var for later 
    Doggo dog;
    int userInt;

    // instruct the user, get their input and store it
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
