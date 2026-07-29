#include <algorithm>
#include <limits>
#include <iostream>
#include <string>
using namespace std;

int main() {
        string Text;
        cout << "\nGeben Sie einen Text ein: ";
        getline(cin, Text);
        cout << "\nBevor das Textumdrehung: " << Text;
        cout << "\nNach das Textumdrehung: ";
        for(int i = Text.length() -1; i >= 0; --i) {
            cout << Text[i];
        }

        int Frage;
        cout << "\n\nMoechten Sie nochmal? (Ja = 1, Nein = 2): ";
        cin >> Frage;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if(Frage == 2) {
            cout << "\nBye";
            return 0;
        }
        else if(Frage == 1) {
            cout << "\nAlles klar." << main();
        }
        else {
            cout << "\nFalscher eingabe.";
            return 0;
        }
    }


