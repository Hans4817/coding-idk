#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int Kapazitaet; //Anzahl der Kapazitäten

    cout << "Geben Sie die Anzahl der Kapazitaeten ein: ";
    cin >> Kapazitaet;

    float mF;
    int choice;
    cout << "Moechten Sie mit Parallel- oder Reihenschlaltung arbeiten? (1,2): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    	int Ergebnis;
        for (int i = 0; i < Kapazitaet; i++)
        {
            cout << "Geben Sie die Kapazitaet des " << i + 1 << ". Kondensators in mF ein: ";
            cin >> mF;
            Ergebnis += mF;
        }
        cout << "\nGesamtkapazitaet: " << Ergebnis << "mF";
        break;

    case 2:
        float mFAbfrage;
        for (int i = 0; i < Kapazitaet; i++)
        {
            cout << "Geben Sie die Kapazitaet des " << i + 1 << ". Kondensators in mF ein: ";
            cin >> mFAbfrage;
            mF += 1 / mFAbfrage;
        }
        float gesamtKapazitaet = 1 / mF;
        cout << "\nGesamtkapazitaet: " << gesamtKapazitaet << " mF";
        break;
    }

    return 0;
}
