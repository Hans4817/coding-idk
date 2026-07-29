#include <iostream>
#include <cmath> // Include cmath for sqrt and acos
using namespace std;

int main() {
    string mainVariable;
    while (true) {
        int input;
        cout << "Abstände von geometrischen Objekten";
        cout << "\n\t1. Abstand eines Punktes von einer Ebene bestimmen.";
        cout << "\n\t2. Abstand eines Punktes von einer Geraden bestimmen.";
        cout << "\n\t3. Abstand von zwei windschiefen Geraden.";
        cout << "\nWählen Sie eine Option: ";
        cin >> input;

        switch (input) {
            case 1: { // Den Abstand eines Punktes mit der Abstandsformel bestimmen.
                int P[3]; // Punkt P
                int E[3]; // Ebene E (Koeffizienten a, b, c)
                int B; // Konstante d in der Ebenengleichung
                for (int i = 0; i <= 2; i++) {
                    cout << "\nGeben Sie die " << i + 1 << ". Koordinate des Punktes P ein: ";
                    cin >> P[i];
                }
                for (int i = 0; i <= 2; i++) {
                    cout << "\nGeben Sie den " << i + 1 << ". Koeffizient der Ebene E ein: ";
                    cin >> E[i];
                }
                cout << "\nGeben Sie B ein: ";
                cin >> B;
                float NormalenvektorN = sqrt(E[0] * E[0] + E[1] * E[1] + E[2] * E[2]);

                cout << "\nLE: " << (E[0] * P[0] + E[1] * P[1] + E[2] * P[2] - B) / NormalenvektorN;
                break;
            }
            case 2: { // Abstand eines Punktes von einer Geraden bestimmen.
                int P[3]; // Punkt P
                int G[3]; // Richtungsvektor der Geraden
                int A[3]; // Stützpunkt der Geraden

                // Eingabe der Koordinaten des Punktes P
                for (int i = 0; i <= 2; i++) {
                    cout << "\nGeben Sie die " << i + 1 << ". Koordinate des Punktes P ein: ";
                    cin >> P[i];
                }

                // Eingabe der Koordinaten des Stützpunkts A der Geraden
                for (int i = 0; i <= 2; i++) {
                    cout << "\nGeben Sie die " << i + 1 << ". Koordinate des Stützpunkts A ein: ";
                    cin >> A[i];
                }

                // Eingabe des Richtungsvektors G der Geraden
                for (int i = 0; i <= 2; i++) {
                    cout << "\nGeben Sie die " << i + 1 << ". Komponente des Richtungsvektors G ein: ";
                    cin >> G[i];
                }

                // Berechnung des Verbindungsvektors AP
                int AP[3];
                for (int i = 0; i <= 2; i++) {
                    AP[i] = P[i] - A[i];
                }

                // Kreuzprodukt von AP und G berechnen
                int Kreuzprodukt[3];
                Kreuzprodukt[0] = AP[1] * G[2] - AP[2] * G[1];
                Kreuzprodukt[1] = AP[2] * G[0] - AP[0] * G[2];
                Kreuzprodukt[2] = AP[0] * G[1] - AP[1] * G[0];

                // Betrag des Kreuzprodukts berechnen
                float BetragKreuzprodukt = sqrt(Kreuzprodukt[0] * Kreuzprodukt[0] +
                                                Kreuzprodukt[1] * Kreuzprodukt[1] +
                                                Kreuzprodukt[2] * Kreuzprodukt[2]);

                // Betrag des Richtungsvektors G berechnen
                float BetragG = sqrt(G[0] * G[0] + G[1] * G[1] + G[2] * G[2]);

                // Abstand berechnen: |AP x G| / |G|
                float Abstand = BetragKreuzprodukt / BetragG;

                cout << "\nDer Abstand des Punktes von der Geraden beträgt: " << Abstand;
                break;
            }
            case 3: { // Abstand von zwei windschiefen Geraden
                int A1[3], A2[3]; // Stützpunkte der beiden Geraden
                int G1[3], G2[3]; // Richtungsvektoren der beiden Geraden

                // Eingabe der Koordinaten der Stützpunkte
                for (int i = 0; i <= 2; i++) {
                    cout << "\nGeben Sie die " << i + 1 << ". Koordinate des Stützpunkts A1 ein: ";
                    cin >> A1[i];
                }
                for (int i = 0; i <= 2; i++) {
                    cout << "\nGeben Sie die " << i + 1 << ". Koordinate des Stützpunkts A2 ein: ";
                    cin >> A2[i];
                }

                // Eingabe der Richtungsvektoren
                for (int i = 0; i <= 2; i++) {
                    cout << "\nGeben Sie die " << i + 1 << ". Komponente des Richtungsvektors G1 ein: ";
                    cin >> G1[i];
                }
                for (int i = 0; i <= 2; i++) {
                    cout << "\nGeben Sie die " << i + 1 << ". Komponente des Richtungsvektors G2 ein: ";
                    cin >> G2[i];
                }
                
                // Verbindungsvektor zwischen den Stützpunkten A1 und A2
                int A1A2[3];
                for (int i = 0; i <= 2; i++) {
                    A1A2[i] = A2[i] - A1[i];
                }

                // Kreuzprodukt der Richtungsvektoren G1 und G2
                int Kreuzprodukt[3];
                Kreuzprodukt[0] = G1[1] * G2[2] - G1[2] * G2[1];
                Kreuzprodukt[1] = G1[2] * G2[0] - G1[0] * G2[2];
                Kreuzprodukt[2] = G1[0] * G2[1] - G1[1] * G2[0];

                // Betrag des Kreuzprodukts berechnen
                float BetragKreuzprodukt = sqrt(Kreuzprodukt[0] * Kreuzprodukt[0] +
                                                Kreuzprodukt[1] * Kreuzprodukt[1] +
                                                Kreuzprodukt[2] * Kreuzprodukt[2]);

                // Skalarprodukt des Verbindungsvektors A1A2 mit dem Kreuzprodukt von G1 und G2
                float Skalarprodukt = A1A2[0] * Kreuzprodukt[0] + A1A2[1] * Kreuzprodukt[1] + A1A2[2] * Kreuzprodukt[2];

                // Abstand berechnen: |(A2 - A1) * (G1 x G2)| / |G1 x G2|
                float Abstand = abs(Skalarprodukt) / BetragKreuzprodukt;

                cout << "\nDer Abstand der beiden windschiefen Geraden beträgt: " << Abstand;
                break;
            }
            default:
                cout << "\nError";
                return 1;
        }

        cout << "\nMöchten Sie das Programm nochmal verwenden? (J/N): ";
        cin >> mainVariable;
        if (mainVariable == "j" || mainVariable == "J") {
            cout << "\nOk.";
        } else {
            cout << "\nTschüss!";
            return 0;
        }
    }
}