#include <iostream>

// Basisklasse
class Tier {
public:
    virtual void machenGeräusch() {
        std::cout << "Das Tier macht ein Geräusch!" << std::endl;
    }
};

// Abgeleitete Klasse Hund
class Hund : public Tier {
public:
    void machenGeräusch() override {
        std::cout << "Der Hund bellt!" << std::endl;
    }
};

// Abgeleitete Klasse Katze
class Katze : public Tier {
public:
    void machenGeräusch() override {
        std::cout << "Die Katze miaut!" << std::endl;
    }

};

int main() {
    Tier* tier1 = new Hund();
    Tier* tier2 = new Katze();

    tier1->machenGeräusch(); // Ruft die Methode machenGeräusch() der Klasse Hund auf
    tier2->machenGeräusch(); // Ruft die Methode machenGeräusch() der Klasse Katze auf
    return 0;
}
