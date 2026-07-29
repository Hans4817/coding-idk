#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    string telefonnummer;
    char weiter;

    ofstream datei("telefonbuch.txt", ios::app); // Datei im Anfügemodus öffnen

    if (!datei) {
        cerr << "Fehler beim Oeffnen der Datei!" << endl;
        return 1;
    }

    do {
        cout << "Gib den Namen ein: ";
        getline(cin, name);

        cout << "Gib die Telefonnummer ein: ";
        getline(cin, telefonnummer);

        // In Datei schreiben
        datei << "Name: " << name << ", Telefonnummer: " << telefonnummer << endl;

        cout << "Moechten Sie noch einen Eintrag hinzufuegen? (j/n): ";
        cin >> weiter;
        cin.ignore();

    } while (weiter == 'j' || weiter == 'J');

    datei.close(); // Datei schließen

    cout << "Daten wurden erfolgreich gespeichert!" << endl;

    // Telefonbuch anzeigen?
    char anzeigen;
    cout << "Moechten Sie das Telefonbuch anzeigen? (j/n): ";
    cin >> anzeigen;

    if (anzeigen == 'j' || anzeigen == 'J') {
        ifstream lesedatei("telefonbuch.txt");
        if (!lesedatei) {
            cerr << "Fehler beim Oeffnen der Datei zum Lesen!" << endl;
            return 1;
        }

        string zeile;
        cout << "\n--- Telefonbuch ---" << endl;
        while (getline(lesedatei, zeile)) {
            cout << zeile << endl;
        }
        lesedatei.close();
    }

    // 🔍 Suchfunktion
    char suche;
    cout << "Moechten Sie nach einem Eintrag suchen? (j/n): ";
    cin >> suche;
    cin.ignore();

    if (suche == 'j' || suche == 'J') {
        string suchbegriff;
        cout << "Geben Sie einen Namen oder eine Telefonnummer ein: ";
        getline(cin, suchbegriff);

        ifstream lesedatei("telefonbuch.txt");
        if (!lesedatei) {
            cerr << "Fehler beim Oeffnen der Datei zum Lesen!" << endl;
            return 1;
        }

        string zeile;
        bool gefunden = false;
        cout << "\n--- Suchergebnisse ---" << endl;
        while (getline(lesedatei, zeile)) {
            if (zeile.find(suchbegriff) != string::npos) {
                cout << zeile << endl;
                gefunden = true;
            }
        }

        if (!gefunden) {
            cout << "Kein Eintrag gefunden zu: " << suchbegriff << endl;
        }

        lesedatei.close();
    }

    return 0;
}
