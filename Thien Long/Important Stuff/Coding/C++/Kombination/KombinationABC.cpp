#include <iostream>
#include <cmath>
using namespace std;

void generateBinaryStrings(int n) {
    int combinations = pow(2, n);
    for (int i = 0; i < combinations; ++i) {
        int temp = i;
        for (int j = 0; j < n; ++j) {
            cout << (temp % 2) << " ";
            temp /= 2;
        }
        cout << endl;
    }
}

int main() {
    while (true) {
        int n;
        cout << "Geben Sie n ein: ";
        cin >> n;

        if (n < 1) {
            cout << "Ungültige Eingabe. Die Anzahl der Stellen muss mindestens 1 sein." << endl;
            continue;
        }
        cout << "A|B|C\n";
        generateBinaryStrings(n);

        string MoechtenSieNochmal;
        cout << "\nMoechten Sie das Programm nochmal benutzen? (j/n) ";
        cin >> MoechtenSieNochmal;
        if (MoechtenSieNochmal == "n" || MoechtenSieNochmal == "N") {
            cout << "\nTschüss!";
            break;
        }
    }
    return 0;
}
