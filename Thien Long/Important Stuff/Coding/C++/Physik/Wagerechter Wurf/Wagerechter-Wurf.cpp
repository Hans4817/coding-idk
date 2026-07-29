#include <iostream>
#include <math.h>
using namespace std;

int main() {
    const float pi = 3.14159265; // Pi
    float g = 9.81;
    float geschwindigkeit, start_hoehe; // Variablen für Winkel, Geschwindigkeit und Start-Höhe

    cout << "Geben Sie die Geschwindigkeit in m/s ein: "; // Eingabe der Geschwindigkeit
    cin >> geschwindigkeit;
    cout << "Geben Sie die Start-Höhe in Metern ein: "; // Eingabe der Start-Höhe
    cin >> start_hoehe;

    float zeit = sqrt((2 * start_hoehe) / g);
    
    cout << "\nZeit(Sekunde)     \tHoehe(Meter)" << endl;
    cout << "-------------------------------------\n";
    for (double t = 0; t <= zeit; t += 0.1) {
        double hoehe = start_hoehe - 0.5 * g * t * t;
        hoehe = hoehe < 0 ? 0 : hoehe; // wenn negativer bereich, dann stop
        cout << t << "\t\t" << hoehe << endl;
    }

    double distanz = geschwindigkeit * zeit;
    cout << "\nDie Entfernung von der Kugel liegt bei: " << distanz << " Meter." << endl; // Ausgabe der Distanz

    return 0;
}