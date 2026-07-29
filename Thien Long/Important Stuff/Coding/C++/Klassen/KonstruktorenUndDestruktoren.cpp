#include <iostream>
#include <thread> // Für sleep_for
#include <chrono> // Für chrono::seconds

class Spielzeugauto {
public:
    // Konstruktor
    Spielzeugauto() {
        std::cout << "Das Spielzeugauto wird gebaut!" << std::endl;
    }

    // Destruktor
    ~Spielzeugauto() {
        std::cout << "Das Spielzeugauto wird auseinandergebaut!" << std::endl;
    }
};

int main() {
    // Ein Objekt der Klasse Spielzeugauto erstellen
    Spielzeugauto meinAuto;

    // Das Objekt wird automatisch zerstört, wenn es aus dem Gültigkeitsbereich geht
    std::this_thread::sleep_for(std::chrono::seconds(3)); // 3 Sekunden warten

    return 0;
}
