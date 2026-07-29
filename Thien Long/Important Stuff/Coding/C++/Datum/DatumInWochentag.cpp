#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string wochentagBerechnen(int tag, int monat, int jahr) {
    if (monat == 1 || monat == 2) {
        monat += 12;
        jahr -= 1;
    }
    // 2025
    int J = jahr / 100;     // 20
    int K = jahr % 100;     // 25

    int h = (tag + (13 * (monat + 1)) / 5 + K + (K / 4) + (J / 4) + (5 * J)) % 7;

    // 0 = Samstag, 1 = Sonntag, 2 = Montag, 3 = Dienstag, 4 = Mittwoch, 5 = Donnerstag, 6 = Freitag
    string wochentage[] = {"Samstag", "Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag"};

    return wochentage[h];
}

int main() {
    int tag, monat, jahr;

    cout << "Gib ein Datum ein (TT MM JJJJ): ";
    cin >> tag >> monat >> jahr;

    string wochentag = wochentagBerechnen(tag, monat, jahr);

    cout << "Der Wochentag ist: " << wochentag << endl;

    return 0;
}