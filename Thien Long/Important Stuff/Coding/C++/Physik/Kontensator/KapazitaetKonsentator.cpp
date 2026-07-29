#include <iostream>
#include <math.h>
using namespace std;

int Kapazitaet() {
    const float E0 = 8.85 * pow(10, -12);
    const float Er = 1;

    float C, d, A;

    int choice;

    cout << "\nWaehlen Sie eine Option: \n1. Flaeche \n2. Distanz \n3. Beide\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "\nGeben Sie die Flaeche in mm^2 ein: "; cin >> A;
            for (int i = 0; i <= 100; i+=10) {
                C = Er * E0 * A/i; //Berechnet der Kapazität basierend auf der Fläche(A) und variabler Distanz (i):
                cout << "\nDie Kapazitaet " << i <<" betraegt: " << C <<  " Farad.";
            }
            break;
        case 2:
            cout << "\nGeben Sie die Distanz in mm ein: "; cin >> d;
            for (int i = 0; i <= 100; i+=10) {
                C = Er * E0 * i/d; //Berechnung der Kapazität basierend auf variabler Fläche (i) und fester Distanz (d):
                cout << "\nDie Kapazitaet " << i <<" betraegt: " << C <<  " Farad.";
            }
            break;
        case 3:
            cout << "\nGeben Sie die Flaeche in mm^2 ein: "; cin >> A;
            cout << "\nGeben Sie die Distanz in mm ein: "; cin >> d;
            for (int i = 0; i <= 100; i+=10) {
                C = Er * E0 * A/d; //Berechnung der Kapazität basierend auf festgelegter Fläche (A) und Distanz (d):
                cout << "\nDie Kapazitaet " << i <<" betraegt: " << C <<  " Farad.";
            }
            break;
        default:
            cout << "\nUngueltige Option ausgewaehlt.";
            break;
    }
    return true;
}

int main(int argc, char const *argv[])
{
	string J;
	Kapazitaet();
	while(true) {
		cout << "\n\nMoechten Sie das Programm neu verwenden? (J,N)"; cin >> J;
		if(J == "J" || J == "j") {
			Kapazitaet();
		}
		else {
			cout << "\n\nBye.";
			return 0;
		}
	}


    return 0;
}
