#include <iostream>

// Basisklasse
class Fahrzeug {
public:
    void fahren() {
        std::cout << "Das Fahrzeug fährt!" << std::endl;
    }
};

// Abgeleitete Klasse
class Auto : public Fahrzeug {
public:
    void hupen() {
        std::cout << "Das Auto hupt!" << std::endl;
    }
};

int main() {
    Auto meinAuto;
    meinAuto.fahren(); // Methode der Basisklasse
    meinAuto.hupen();  // Methode der abgeleiteten Klasse

    return 0;
}
