#include <iostream>
#include <cmath>
using namespace std;

float EuklidischerAbstand(int dx, int dy, int dz) {
    return sqrt(dx * dx + dy * dy + dz * dz);
}

int ManhattenDistanz(int dx, int dy, int dz) {
    return abs(dx) + abs(dy) + abs(dz);
}

int main() {
    while (true) {
        int x1, x2, x3 = 0;
        int y1, y2, y3 = 0;
        int Dimension2oderDimension3;

        cout << "Geben Sie 3 ein, wenn Sie 3 Dimensional rechnen moechten oder geben Sie 2 ein, wenn Sie 2 Dimensional rechnen moechten.";
        cout << "\nEingabe: "; 
        cin >> Dimension2oderDimension3;

        int dx, dy, dz;
        switch(Dimension2oderDimension3) {
            case 2:
                cout << "\nGeben Sie x1 ein: "; cin >> x1;	
                cout << "\nGeben Sie x2 ein: "; cin >> x2;
                cout << "\nGeben Sie y1 ein: "; cin >> y1;
                cout << "\nGeben Sie y2 ein: "; cin >> y2;

                dx = x1 - x2;
                dy = y1 - y2;
                dz = 0;  // 2D case, so dz is 0
                cout << "\nDer Euklidische Abstand von dx " << dx << " und dy " << dy << " ist " << EuklidischerAbstand(dx, dy, dz);
                cout << "\nDie Manhatten-Distanz von dx " << dx << " und dy " << dy << " ist " << ManhattenDistanz(dx, dy, dz);
                break;

            case 3:
                cout << "\nGeben Sie x1 ein: "; cin >> x1;	
                cout << "\nGeben Sie x2 ein: "; cin >> x2;
                cout << "\nGeben Sie y1 ein: "; cin >> y1;
                cout << "\nGeben Sie y2 ein: "; cin >> y2;
                cout << "\nGeben Sie x3 ein: "; cin >> x3;
                cout << "\nGeben Sie y3 ein: "; cin >> y3;

                dx = x1 - x2;
                dy = y1 - y2;
                dz = x3 - y3;
                cout << "\nDer Euklidische Abstand von dx " << dx << " , dy " << dy << " und dz " << dz << " ist " << EuklidischerAbstand(dx, dy, dz);
                cout << "\nDie Manhatten-Distanz von dx " << dx << " , dy " << dy << " und dz " << dz << " ist " << ManhattenDistanz(dx, dy, dz);
                break;

            default: 
                cout << "\nUngültige Eingabe";
                continue;  // Ask for input again
        }

        string Abfrage;
        cout << "\nMoechten Sie nochmal? (J,N) ";
        cin >> Abfrage;
        if(Abfrage != "J" && Abfrage != "j") {
            cout << "Bye Bye";
            break;
        }
        cout << "Alles klar.\n\n";
    }

    return 0;
}
