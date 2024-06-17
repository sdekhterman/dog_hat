// Your First C++ Program

#include <iostream>
#include <conio.h>

using namespace std;
int main() {
    char s;
    cout << "There is a dog!" << endl;
    cout << "Would you like to give the dog a hat? (y/n)" << endl;
    cin >> s;
    switch(s){
        case 'y':
            cout << "The dog likes the hat! <3";
            break;
        case 'n':
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
            cout << "You saved the dog's life.";
            break;
        default:
            cout << "The dog vanishes." << endl;
    }
    return 0;
}
