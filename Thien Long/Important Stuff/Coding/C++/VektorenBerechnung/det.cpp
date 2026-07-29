#include <iostream>
using namespace std;

void ausgabeMatrix(int A[3][3]) {
    for(int i = 0; i <= 2; i++) {
        for(int k = 0; k <= 2; k++) {
            cout << A[i][k] << " ";
        }
        cout << endl;
    }
}

int main() {
    while (true) {
        int A[3][3] = {0};
        cout << "Determinante Berechnung" << endl;
        cout << "\nEingabe der 3x3-Matrix\n";
        cout << endl;    
        for(int i = 0; i <= 2; i++) {
            for(int k = 0; k <= 2; k++) {
                cin >> A[i][k];
            }
        }

        cout << "\nDie eingegebene Matrix lautet:" << endl;
        ausgabeMatrix(A);

        int determinant = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) -
                          A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) +
                          A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

        cout << "Die Determinante der Matrix lautet: " << determinant << endl;

        string Abfrage;
        cout << "\nMoechten Sie nochmal? (J,N) ";
        cin >> Abfrage;

        if (Abfrage != "J" && Abfrage != "j") {
            cout << "Bye Bye" << endl;
            break;
        }
    }

    return 0;
}
 