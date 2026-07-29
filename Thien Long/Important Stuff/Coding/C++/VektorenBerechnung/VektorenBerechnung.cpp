#include <iostream>
#include <math.h>
using namespace std;

void AdditionVektor(int a[], int b[]) {
  for(int i = 0; i <= 2; i++) {
    cout << endl << a[i] + b[i];
  }
}

void SubtraktionVektor(int a[], int b[]) {
  for(int i = 0; i <= 2; i++) {
    cout << endl << a[i] - b[i];
  }
}

void skalereMultiplikation(int r, int a[]) {
  for(int i = 0; i <= 2; i++) {
    cout << endl << r * a[i];
  }
}

void Skalarprodukt(int a[], int b[]) {
    int answer[3] = {0};
  for(int i = 0; i <= 2; i++) {
    answer[i] = a[i] * b[i];
  }
    cout << endl << answer[0] + answer[1] + answer[2];
}

void Vektorprodukt(int a[], int b[]) { 
  int a1 = (a[1]*b[2] - a[2]*b[1]);
  int a2 = (a[2]*b[0] - a[0]*b[2]);
  int a3 = (a[0]*b[1] - a[1]*b[0]);
  cout << endl << a1;
  cout << endl << a2;
  cout << endl << a3;

  cout << endl << endl << "Flaecheninhalt des Parallelogramms.";
  cout << endl << "A = " << sqrt(a1*a1 + a2*a2 + a3*a3) << " FE";

  cout << endl << endl << "Flaecheninhalt des Dreiecks.";
  cout << endl << "A = " << sqrt(a1*a1 + a2*a2 + a3*a3) / 2 << " FE";
}

int main(int argc, char const *argv[])
{
    int Abfrage;
    cout << "Vektoren Berechung";
    cout << "\n  1) Addition von Vektoren\n  2) Subtraktion von Vektoren\n  3) skalare Multiplikation\n  4) Skalarprodukt\n  5) Vektorprodukt";
    cout << "\n\nGeben Sie eine Auswahl ein: "; cin >> Abfrage;

    int a[3], b[3], r;


    switch(Abfrage) {
         case 1: //Addition von Vektoren
            for(int i = 0; i <= 2; i++) {
                cout << "Geben Sie die " << i+1 << ". Zahl von a ein: "; cin >> a[i];

            }
            cout << endl;
            for(int i = 0 ; i <= 2; i++) {
                cout << "Geben Sie die " << i+1 << ". Zahl von b ein: "; cin >> b[i];
            }
            AdditionVektor(a, b);
         break;

        case 2: //Subtraktion von Vektoren
            for(int i = 0; i <= 2; i++) {
                cout << "Geben Sie die " << i+1 << ". Zahl von a ein: "; 
                cin >> a[i];
            }
            cout << endl;
            for(int i = 0 ; i <= 2; i++) {
                cout << "Geben Sie die " << i+1 << ". Zahl von b ein: "; 
                cin >> b[i];
            }
            SubtraktionVektor(a, b);
         break;

        case 3: //skalare Multiplikation
            cout << "Geben Sie r ein: "; cin >> r;
            cout << endl;
            for(int i = 0 ; i <= 2; i++) {
                cout << "Geben Sie die " << i+1 << ". Zahl von b ein: "; 
                cin >> a[i];
            }
            skalereMultiplikation(r, a);
         break;

        case 4: //Skalarprodukt
            for(int i = 0 ; i <= 2; i++) {
                cout << "Geben Sie die " << i+1 << ". Zahl von a ein: "; 
                cin >> a[i];
            }
            for(int i = 0 ; i <= 2; i++) {
                cout << "Geben Sie die " << i+1 << ". Zahl von b ein: "; 
                cin >> b[i];
            }
            Skalarprodukt(a, b);
         break;

        case 5: //Vektorprodukt
            for(int i = 0; i <= 2; i++) {
                cout << "Geben Sie die " << i+1 << ". Zahl von a ein: "; 
                cin >> a[i];
            }
            cout << endl;
            for(int i = 0 ; i <= 2; i++) {
                cout << "Geben Sie die " << i+1 << ". Zahl von b ein: "; 
                cin >> b[i];
            }
            Vektorprodukt(a, b);
         break;

        default:
            cout << "Falsche eingabe.";
        return 1;
    }
    return 0;
}