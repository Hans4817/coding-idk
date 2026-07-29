#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const double Zinssatz = 0.07;
    double Kreditbetrag;
    int Laufzeit;


    cout << "Bitte gib die Kreditbetrag ein: "; cin >> Kreditbetrag;
    cout << "\nGeben sie einen Laufzeit ein: "; cin >> Laufzeit;
    cout << "\nWir geben sie " <<  Zinssatz * 100 << "% Zinsen.";
    cout << endl << endl;

    const double Annuitaet = Kreditbetrag * (pow(1 + Zinssatz, Laufzeit) * Zinssatz) / (pow(1 + Zinssatz, Laufzeit) - 1);

    cout << "\nJahr\tRestschuld\tZinsen\tTilgung\tAnnunitaet" << endl;
    double Restschuld = Kreditbetrag;

    for(int i = 1; i <= Laufzeit; i++) {
    	
        double Zinsen = Restschuld * Zinssatz;
        double Tilgung = Annuitaet - Zinsen;
        
        cout << "\n" << i << "\t" << Restschuld  << "\t\t" << Zinsen  << "\t" << Tilgung  << "\t" << Annuitaet;
        Restschuld = Restschuld - Tilgung;

    }

    return 0;
}
