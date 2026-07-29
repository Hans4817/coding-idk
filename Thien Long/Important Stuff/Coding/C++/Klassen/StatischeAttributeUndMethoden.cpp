#include <iostream>

class Spielzeug {
public:
    static int anzahlSpielzeuge; // Statisches Attribut

    // Konstruktorn (Konstruktorn haben immer die gleiche Namen, als auch der Klasse innerhalb dieser Konstruktorn)
    Spielzeug() {
        anzahlSpielzeuge++;
        std::cout << "Ein neues Spielzeug wird erstellt!" << std::endl;
    }
    ~Spielzeug() {
        std::cout << "Ein neues Spielzeug wurde zerstört!" << std::endl;
    }

    static void zeigeAnzahlSpielzeuge() { // Statische Methode
        std::cout << "Anzahl der Spielzeuge: " << anzahlSpielzeuge << std::endl;
    }
};

// Initialisierung des statischen Attributs
int Spielzeug::anzahlSpielzeuge = 0;

int main() {
    Spielzeug spielzeug1; // Konstruktor wird aufgerufen, anzahlSpielzeuge = 1
    Spielzeug spielzeug2; // Konstruktor wird aufgerufen, anzahlSpielzeuge = 2

    // Aufruf der statischen Methode
    Spielzeug::zeigeAnzahlSpielzeuge(); // Ausgabe: Anzahl der Spielzeuge: 2

    return 0;
}
