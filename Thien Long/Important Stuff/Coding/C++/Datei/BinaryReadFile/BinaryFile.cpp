#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string abfrage;
    cout << "Moechten Sie das Telefonbuch bearbeiten? (j,n)";
    cin >> abfrage;

    ofstream dat_aus;
    string dateiname;
    string zeile;

    if(abfrage == "j" || abfrage == "J") {
        cout << "Geben Sie den Namen der Datei ein, die Sie erstellen moechten: ";
        cin >> dateiname;
        cout << endl;

        dat_aus.open(dateiname.c_str(), ios_base::out);

        if (!dat_aus) {
            cout << "Datei konnte nicht erstellt werden!" << endl;
            cout << endl;
            return -1;
        }

        int einsbisDings = 1;

        cout << "Die Eingabe wird mit Zeilen abgegeben.\nGeben Sie die Informationen von Leuten ein:\n"
             << "     (Vorname, Nachname und dann Telefonnummer)" << endl;
        cout << "Geben Sie 'ENDE' ein, um die Eingabe zu beenden." << endl;

        cin.ignore(); // Ignoriert das Zeilenende-Zeichen ('\n') aus der vorherigen Eingabe

        do {
            cout << endl;
            cout << einsbisDings << ". Eingabe: ";
            getline(cin, zeile);

            if (zeile != "ENDE") {
                dat_aus  << zeile << endl;
                einsbisDings += 1;
            }
        } while (zeile != "ENDE");

        dat_aus.close();

        return 0;
    }

    //da beginnt suche
    cout << "Geben Sie den Namen der Datei ein: ";
    cin >> dateiname;
    cout << endl;

    // File opening and search
    ifstream file(dateiname.c_str());

    if (!file.is_open()) {
        cerr << "Fehler beim Öffnen der Datei." << endl;
        return 1;
    }

    // Name, nach dem gesucht werden soll
    string target;
    cout << "Welcher Person möchten Sie suchen? (Name, Vorname): ";
    cin >> target;

    // Durchführen der Suche
    int lineNumber = 1;
    bool found = false;

    while (getline(file, zeile)) {
        // Search for the target string in the whole line
        size_t pos = zeile.find(target);
        if (pos != string::npos) {
            found = true;
            // Output the full name and line number
            cout << "Name gefunden: " << zeile << " in Zeile " << lineNumber << endl;
            break;
        }
        lineNumber++;
    }

    // Ausgabe des Ergebnisses der Suche
    if (!found) {
        cout << "Name nicht gefunden." << endl;
    }

    return 0;
}



/*while (getline(file, zeile)) {: This line reads each line from the file (file) and stores it in the string variable zeile using getline. The loop continues as long as there are lines to read in the file.

size_t pos = zeile.find(target);: In each iteration, it searches for the target string (target) within the current line (zeile). The find function returns the position of the first occurrence of the target string in the line. If the target string is not found, pos will be equal to string::npos.

if (pos != string::npos) {: This condition checks if the target string was found in the current line. If pos is not equal to string::npos, it means the target string was found.

found = true;: Sets the found flag to true, indicating that the target string was found in the file.

cout << "Name gefunden: " << zeile << " in Zeile " << lineNumber << endl;: Outputs a message indicating that the name was found. It prints the full line (zeile), which contains the information for the person, and the line number (lineNumber) where the match was found.

break;: Exits the loop since the target string has been found, and there's no need to continue searching.

lineNumber++;: Increments the lineNumber variable for each iteration, keeping track of the current line number in the file.*/