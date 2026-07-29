#include <iostream>
using namespace std;

const int MAX = 100;

// Einfügesortierung (mit Wächter z[0])
void insert_sort(int n, double z[]) {
    int j;
    double x;

    for (int i = 2; i <= n; i++) {
        x = z[i];
        z[0] = x;
        j = i - 1;
        while (x < z[j]) {
            z[j + 1] = z[j];
            j--;
        }
        z[j + 1] = x;
    }
}

// Median berechnen
double berechneMedian(double z[], int n) {
    if (n % 2 == 1) {
        return z[(n + 1) / 2];  // ungerade: mittleres Element
    } else {
        int mitte1 = n / 2;
        int mitte2 = mitte1 + 1;
        return (z[mitte1] + z[mitte2]) / 2;  // gerade: Mittelwert der zwei mittleren
    }
}

// Mittelwert berechnen
double Mittelwert(double z[], int n) { // Noten Durchschnitt
    double summe = 0;
    for (int i = 1; i <= n; i++) {
        summe += z[i];
    }
    return summe / n;
}

// Minimum (nach Sortierung = erstes Element)
double minValue(double z[]) {
    return z[1];
}

// Maximum (nach Sortierung = letztes Element)
double maxValue(double z[], int n) {
    return z[n];
}

// Häufigster Wert (Modus) + Häufigkeit (per Referenz)
double mostcommonValue(double z[], int n, int& haeufigkeit) {
    int maxCount = 0;
    double mostCommon = z[1];

    for (int i = 1; i <= n; i++) {
        int count = 1;
        for (int j = i + 1; j <= n; j++) {
            if (z[i] == z[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostCommon = z[i];
        }
    }

    haeufigkeit = maxCount; // speichert die Anzahl im Referenzparameter
    return mostCommon;
}

// Hauptprogramm
int main() {
    double z[MAX];
    int n;

    cout << "Wie viele Zahlen möchten Sie eingeben? ";
    cin >> n;

    if (n >= MAX) {
        cout << "Zu viele Zahlen!" << endl;
        return 1;
    }

    cout << "Geben Sie " << n << " Zahlen ein:\n";
    for (int i = 1; i <= n; i++) {  // beginnt bei 1 wegen Wächter
        cin >> z[i];
    }

    insert_sort(n, z);  // Sortieren

    cout << "\nSortierte Zahlen:\n";
    for (int i = 1; i <= n; i++) {
        cout << z[i] << " ";
    }

    double median = berechneMedian(z, n);
    double mittelwert = Mittelwert(z, n);
    double min = minValue(z);
    double max = maxValue(z, n);

    int haeufigkeit = 0;
    double modus = mostcommonValue(z, n, haeufigkeit);

    cout << "\n\n📊 Statistiken:\n";
    cout << "Median: " << median << endl;
    cout << "Mittelwert: " << mittelwert << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Häufigster Wert (Modus): " << modus
         << " (kommt " << haeufigkeit << " mal vor)" << endl;

    return 0;
}
