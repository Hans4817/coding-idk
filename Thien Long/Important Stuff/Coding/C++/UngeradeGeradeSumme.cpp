#include <iostream>
using namespace std;

int Gerade(int Grenze) {
    int j = 0;
    for (int i = 2; i <= Grenze; i += 2) {
        j = j + i;
    }
    cout << j << endl;
    return 0;
}

/* Funktion */
int Ungerade(int Grenze) {
    int j = 0;
    for (int i = 1; i <= Grenze; i += 2) {
        j = j + i;
    }
    cout << j << endl;
    return 0;
}

/* Funktion */
int Summe(int Grenze) {
    int j = 0;
    for (int i = 1; i <= 10; i++) {
        j = j + i;
    }
    cout << j << endl;
    return 0;
}

/* Hauptprogram */
int main() {
    int i;
    cin >> i;
    Gerade(i);
    Ungerade(i);
    Summe(i);
    return 0;
}
