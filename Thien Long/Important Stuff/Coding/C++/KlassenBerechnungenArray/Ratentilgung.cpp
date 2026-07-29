#include <iostream>
using namespace std;

int main()
{
    const int p = 7;
    int DM = 0;
    int t = 0;
    int jahr = 0;
    int gesamtZinsen = 0;
    int gesamtRestschuld = 0;
    int gesamtTilgung = 0;
    int gesamtAnnuitaet = 0;

    cout << "Bitte gib die Anfangsschuld (DM) ein: ";
    cin >> DM;
    cout << "\nBitte gib die Tilgung (T) ein: ";
    cin >> t;
    cout << "\nBitte gib die Anzahl der Jahre (JAHR) ein: ";
    cin >> jahr;

    cout << "\nWir geben sie " << p << "% Zinsen." << endl;

    cout << "\nJahr\tRestschuld\tZinsen\tTilgung\tAnnunitaet" << endl;
    for(int i = 1; i <= jahr; i++) {
        int restschuld = DM - t * (i - 1);
        gesamtRestschuld += restschuld;
        int zinsen = restschuld * p / 100;
        gesamtZinsen += zinsen;
        gesamtTilgung += t;
        int annuitaet = zinsen + t;
        gesamtAnnuitaet += annuitaet;
        cout << i << "\t" << restschuld << "\t\t" << zinsen << "\t" << t << "\t" << annuitaet << endl;
    }

    cout << "\nGesamtzinsen: " << gesamtZinsen << endl;
    cout << "Gesamtrestschuld: " << gesamtRestschuld << endl;
    cout << "Gesamttilgung: " << gesamtTilgung << endl;
    cout << "Gesamtannuitaet: " << gesamtAnnuitaet << endl;

    return 0;
}
