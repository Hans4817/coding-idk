#include <iostream>

class Schatztruhe {
private:
    int schatz;

public:
    // Set-Methode
    void setSchatz(int wert) {
        schatz = wert;
    }

    // Get-Methode
    int getSchatz() {
        return schatz;
    }
};

int main() {
    Schatztruhe meineTruhe;
    meineTruhe.setSchatz(100); // Setzt den Wert des Schatzes auf 100
    std::cout << "Der Schatz in der Truhe ist: " << meineTruhe.getSchatz() << std::endl; // Holt den Wert des Schatzes

    return 0;
}
