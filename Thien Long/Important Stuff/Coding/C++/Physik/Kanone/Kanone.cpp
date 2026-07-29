#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const float pi = 3.14159265; //Pi
    float g = 9.81;
    float grad, geschwindigkeit; //Variable
    cout << "Geben Sie den Winkel in Grad ein: "; //Eingabe
    cin >> grad; //Ausgabe
    cout << "Geben Sie die Geschwindigkeit in m/s ein: "; //Ausgabe
    cin >> geschwindigkeit; //Eingabe


    float radiant = grad * pi / 180; //berechnung der radiant
    float zeit = (2 * geschwindigkeit * sin(radiant)) / g;

    cout << "Zeit\tHoehe";
    for(double t = 0; t <= zeit; t += 1.0) {
        double hoehe = (geschwindigkeit * sin(radiant) * t) - (0.5 * g * pow(t, 2));
        hoehe = hoehe < 0 ? 0 : hoehe;
        cout << t << "\t" << hoehe << endl;
    }

    double distanz = geschwindigkeit * cos(radiant) * zeit;
    cout << "\nDie Entfernung von der Kugel liegt bei: " <<  distanz << " Meter.";

    return 0;
}