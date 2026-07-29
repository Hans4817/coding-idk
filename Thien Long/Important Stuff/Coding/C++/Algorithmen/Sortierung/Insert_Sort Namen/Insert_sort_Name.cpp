#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

// Funktion, um ein Array von Strings mit dem Insertion-Sort-Algorithmus zu sortieren
void insert_sort(string names[], int n) {
    for (int i = 1; i < n; i++) {
        string currentName = names[i];
        int j = i - 1;
        while (j >= 0 && names[j] > currentName) {
            names[j + 1] = names[j];
            j--;
        }
        names[j + 1] = currentName;
    }
}

int main() {
    const int MAX_NAMES = 10000; // Maximale Anzahl von Namen
    string names[MAX_NAMES];
    int count = 0;

    // Öffnen Sie die Datei mit den Namen
    ifstream inputFile("Datei.txt");

    // Überprüfen, ob die Datei geöffnet werden konnte
    if (!inputFile) {
        cerr << "Die Datei konnte nicht geöffnet werden." << endl;
        return 1;
    }

    // Namen aus der Datei lesen
    while (count < MAX_NAMES && inputFile >> names[count]) {
        count++;
    }

    // Schließen Sie die Datei
    inputFile.close();

    // Ausgabe der Namen vor der Sortierung
    cout << "Vor der Sortierung:" << endl << endl;
    for (int i = 0; i < count; i++) {
        cout << i+1 << ". " <<names[i] << " " << endl;
    }
    cout << endl;

    // Namen sortieren
    insert_sort(names, count);

    // Ausgabe der Namen nach der Sortierung
    cout << "Nach der Sortierung:" << endl << endl;
    for (int j = 0; j < count; j++) {
        cout << j+1 << ". " << names[j] << endl;
    }
    cout << endl;

    return 0;
}
