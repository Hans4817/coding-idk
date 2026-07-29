#include <iostream>
using namespace std;

const int N = 9; // Größe des Sudoku-Rasters

// Überprüft, ob es sicher ist, eine Zahl in eine bestimmte Zelle zu setzen
bool istSicher(int raster[N][N], int zeile, int spalte, int zahl) {
    // Überprüft, ob die Zahl bereits in der aktuellen Zeile oder Spalte vorhanden ist
    for (int x = 0; x < N; x++)
        if (raster[zeile][x] == zahl || raster[x][spalte] == zahl)
            return false;

    // Berechnet den Startpunkt des 3x3-Unterrasters
    int startZeile = zeile - zeile % 3, startSpalte = spalte - spalte % 3;

    // Überprüft, ob die Zahl im 3x3-Unterraster vorhanden ist
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (raster[i + startZeile][j + startSpalte] == zahl)
                return false;

    return true;
}

// Löst das Sudoku-Rätsel mit Backtracking
bool loeseSudoku(int raster[N][N]) {
    for (int zeile = 0; zeile < N; zeile++) {
        for (int spalte = 0; spalte < N; spalte++) {
            if (raster[zeile][spalte] == 0) { // Sucht nach einer leeren Zelle
                for (int zahl = 1; zahl <= 9; zahl++) {
                    if (istSicher(raster, zeile, spalte, zahl)) {
                        raster[zeile][spalte] = zahl; // Setzt die Zahl vorläufig ein

                        if (loeseSudoku(raster)) // Versucht, das Rätsel weiter zu lösen
                            return true;

                        raster[zeile][spalte] = 0; // Rückgängigmachen der Einsetzung
                    }
                }
                return false; // Keine Zahl passt in diese Zelle
            }
        }
    }
    return true; // Rätsel gelöst
}

// Gibt das Sudoku-Raster auf der Konsole aus
void druckeRaster(int raster[N][N]) {
    for (int zeile = 1; zeile < N; zeile++) {
        for (int spalte = 1; spalte < N; spalte++)
            cout << raster[zeile][spalte] << " ";
        cout << endl;
    }
}

int main() {
    int raster[N][N] = {0}; // Initialisiert das Sudoku-Raster mit Nullen
    int X_achse;
    int Y_achse;
    druckeRaster(raster);
    cout << "Geben Sie das Sudoku-Raetsel ein. (Geben Sie 0 ein, um die Schleife zu beenden.)" << endl;
    while(true) {
        cout << "\nGeben Sie die X-Kordinate ein: "; cin >> Y_achse;
        if(Y_achse == 0)
            break;
        cout << "\nGeben Sie die Y-Kordinate ein: "; cin >> X_achse;
        if(X_achse == 0)
            break;
        cin >> raster[X_achse][Y_achse]; // Liest die Eingabe des Benutzers
        druckeRaster(raster); // Gibt das Raster nach jeder Eingabe aus
        cout << endl;
    }

    if (loeseSudoku(raster)) {
        cout << "Gelöstes Sudoku:" << endl;
        druckeRaster(raster); // Gibt das gelöste Sudoku aus
    } else {
        cout << "Keine Lösung existiert" << endl; // Gibt eine Fehlermeldung aus
    }

    return 0;
}
