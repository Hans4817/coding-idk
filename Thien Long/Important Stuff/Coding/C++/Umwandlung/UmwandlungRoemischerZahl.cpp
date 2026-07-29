#include <iostream>
using namespace std;

/*
Römischer Ziffer Wertigkeit
            I  1
            V  5
            X  10
            L  50
            C  100
            D  500
            M  1000
*/

void intToRoman(int Wertigkeit) {
    while (Wertigkeit != 0) {
        if (Wertigkeit >= 1000) {
            cout << "M";
            Wertigkeit -= 1000;
            continue;
        } else if (Wertigkeit >= 900) {
            cout << "CM";
            Wertigkeit -= 900;
            continue;
        } else if (Wertigkeit >= 500) {
            cout << "D";
            Wertigkeit -= 500;
            continue;
        } else if (Wertigkeit >= 400) {
            cout << "CD";
            Wertigkeit -= 400;
            continue;
        } else if (Wertigkeit >= 100) {
            cout << "C";
            Wertigkeit -= 100;
            continue;
        } else if (Wertigkeit >= 90) {
            cout << "XC";
            Wertigkeit -= 90;
            continue;
        } else if (Wertigkeit >= 50) {
            cout << "L";
            Wertigkeit -= 50;
            continue;
        } else if (Wertigkeit >= 40) {
            cout << "XL";
            Wertigkeit -= 40;
            continue;
        } else if (Wertigkeit >= 10) {
            cout << "X";
            Wertigkeit -= 10;
            continue;
        } else if (Wertigkeit >= 9) {
            cout << "IX";
            Wertigkeit -= 9;
            continue;
        } else if (Wertigkeit >= 5) {
            cout << "V";
            Wertigkeit -= 5;
            continue;
        } else if (Wertigkeit >= 4) {
            cout << "IV";
            Wertigkeit -= 4;
            continue;
        } else if (Wertigkeit >= 1) {
            cout << "I";
            Wertigkeit -= 1;
            continue;
        }
    }
    cout << endl;
}

int main() {
	while(true) {
	    int Wertigkeit;
	    cout << "\nRoemischer Ziffer |  Wertigkeit\n\t       I  |  1\n\t       V  |  5\n\t       X  |  10\n\t       L  |  50\n\t       C  |  100\n\t       D  |  500\n\t       M  |  1000";
	    cout << "\n\nGeben Sie die Wertigkeit ein: ";
	    cin >> Wertigkeit;
	    
	    intToRoman(Wertigkeit);
        int Frage;
        cout << "\n\nMoechten Sie nochmal? (Ja = 1, Nein = 2): ";
        cin >> Frage;
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

    return 0; 
}
