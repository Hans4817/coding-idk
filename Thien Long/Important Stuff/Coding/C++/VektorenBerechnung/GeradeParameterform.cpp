#include <iostream>
#include <cmath> // Use <cmath> instead of <math.h> in C++
using namespace std;

void AdditionVektor(int a[], int b[]) {
    for (int i = 0; i < 3; i++) {
        cout << endl << a[i] + b[i];
    }
}

void SubtraktionVektor(int a[], int b[]) {
    for (int i = 0; i < 3; i++) {
        cout << endl << a[i] - b[i];
    }
}

void skalareMultiplikation(int r, int a[]) {
    for (int i = 0; i < 3; i++) {
        cout << endl << r * a[i];
    }
}

void Skalarprodukt(int a[], int b[]) {
    int result = 0;
    for (int i = 0; i < 3; i++) {
        result += a[i] * b[i];
    }
    cout << endl << result;
}

void Vektorprodukt(int a[], int b[]) {
    int a1 = (a[1] * b[2] - a[2] * b[1]);
    int a2 = (a[2] * b[0] - a[0] * b[2]);
    int a3 = (a[0] * b[1] - a[1] * b[0]);
    cout << endl << a1;
    cout << endl << a2;
    cout << endl << a3;

    cout << endl << endl << "Flaecheninhalt des Parallelogramms.";
    cout << endl << "A = " << sqrt(a1 * a1 + a2 * a2 + a3 * a3) << " FE";

    cout << endl << endl << "Flaecheninhalt des Dreiecks.";
    cout << endl << "A = " << sqrt(a1 * a1 + a2 * a2 + a3 * a3) / 2 << " FE";
}

void GeradenImRaum(int P[], int Q[], int t) {
    int PQ[3];
    int resultT[3];
    for (int i = 0; i <= 2; i++) {
        PQ[i] = Q[i] - P[i];
        
    }
    cout << "       " << P[0] << "     " << PQ[0] << "   " << P[0] + PQ[0];
    cout << "\ng: x = " << P[1] << " +" << t << "* " << "t" << " = " << P[1] + PQ[1];
    cout << "\n       " << P[2] << "      " << PQ[2] << "   " << P[2] + PQ[2];

    cout << "\nGeben Sie t ein: "; cin >> t;
    for(int i = 0; i <= 2; i++) {
        resultT[i] = P[i] + (t*PQ[i]);
    }
    cout << "       " << P[0] << "     " << PQ[0] << "   " << resultT[0];
    cout << "\ng: x = " << P[1] << " +" << t << "* " << "t" << " = " << resultT[1];
    cout << "\n       " << P[2] << "      " << PQ[2] << "   " << resultT[2];
}



int main(int argc, char const *argv[]) {
    int Abfrage;
    cout << "Vektoren Berechnung";
    cout << "\n  1) Addition von Vektoren\n  2) Subtraktion von Vektoren\n  3) skalare Multiplikation\n  4) Skalarprodukt\n  5) Vektorprodukt\n  6) Geraden im Raum";
    cout << "\n\nGeben Sie eine Auswahl ein: ";
    cin >> Abfrage;

    int a[3], b[3], r;

    switch (Abfrage) {
    case 1: // Addition von Vektoren
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von a ein: ";
            cin >> a[i];
        }
        cout << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von b ein: ";
            cin >> b[i];
        }
        AdditionVektor(a, b);
        break;

    case 2: // Subtraktion von Vektoren
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von a ein: ";
            cin >> a[i];
        }
        cout << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von b ein: ";
            cin >> b[i];
        }
        SubtraktionVektor(a, b);
        break;

    case 3: // skalare Multiplikation
        cout << "Geben Sie r ein: ";
        cin >> r;
        cout << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von a ein: ";
            cin >> a[i];
        }
        skalareMultiplikation(r, a);
        break;

    case 4: // Skalarprodukt
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von a ein: ";
            cin >> a[i];
        }
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von b ein: ";
            cin >> b[i];
        }
        Skalarprodukt(a, b);
        break;

    case 5: // Vektorprodukt
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von a ein: ";
            cin >> a[i];
        }
        cout << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von b ein: ";
            cin >> b[i];
        }
        Vektorprodukt(a, b);
        break;

    case 6: // Geraden im Raum
        cout << "Geben Sie Punkt P ein:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von P ein: ";
            cin >> a[i];
        }
        cout << "Geben Sie Punkt Q ein:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Geben Sie die " << i + 1 << ". Zahl von Q ein: ";
            cin >> b[i];
        }

        GeradenImRaum(a, b, 1);
        break;

    default:
        cout << "Falsche Eingabe.";
        return 1;
    }
    return 0;
}
