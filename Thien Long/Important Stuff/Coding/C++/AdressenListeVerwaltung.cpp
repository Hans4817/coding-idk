#include <iostream>
#include <string>
using namespace std;

class AdressenListeVerwaltung {
public:
    string Vorname;
    string Nachname;
    string Strassee;
    string Postleitzahl;
    string Land;

    void Ausgabe() {
        cout << "Vorname: " << Vorname << endl;
        cout << "Nachname: " << Nachname << endl;
        cout << "Land: " << Land << endl;
        cout << "Strasse: " << Strassee << endl;
        cout << "Postleitzahl: " << Postleitzahl << endl;
    }
};

int main() {
    int Freunde;
    cout << "Wie viele Freunde haben Sie? ";
    cin >> Freunde;
    AdressenListeVerwaltung AdressenListe;

    for(int i = 0; i < Freunde; i++) {
    	cout << i+1 << ". Freund/in\n";

        cout << "Wie lauten die Namen ihres Freundes? ";
        cin >> AdressenListe.Vorname;
        cout << endl;

        cout << "Wie lauten die Nachname ihres Freundes? ";
        cin >> AdressenListe.Nachname;
        cout << endl;
        cout << "Wie lauten das Land ihres Freundes? ";
        cin >> AdressenListe.Land;
        cout << endl;
        cout << "Wie lauten die Strasse ihres Freundes? ";
        cin >> AdressenListe.Strassee;
        cout << endl;		
        cout << "Wie lauten die Postleitzahl ihres Freundes? ";
        cin >> AdressenListe.Postleitzahl;
        cout << endl;

    }

    for(int i = 0; i < Freunde; i++) {
        cout << i+1 << ". Freund/in: \n";
        AdressenListe.Ausgabe();
        cout << endl;
    }

    return 0;
}
