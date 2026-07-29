#include <iostream>
#include <cmath> // Include cmath for sqrt and acos
using namespace std;

float Skalarprodukt(int a[], int b[]) {
    int answer = 0; 
    for(int i = 0; i < 3; i++) {
        answer += a[i] * b[i];
    }
    return answer;
}

double Betrag(int a[]) {
    return sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
}

int main() {
	  string mainVariable;
		while(true) {
    int input;
    cout << "Schnittwinkel von Gerade und Ebenen";
    cout << "\n\t1. Den Schnittwinkel zwischen zwei Geraden berechnen.";
    cout << "\n\t2. Den Schnittwinkel zwischen zwei Ebenen berechnen.";
    cout << "\n\t3. Den Schnittwinkel zwischen einer Geraden und einer Ebene berechnen.";
    cout << "\nWählen Sie eine Option: "; 
    cin >> input;

    int nE[3], nF[3]; // Normalenvektoren für Ebenen

    switch(input) {
        case 1: { // Den Schnittwinkel zwischen zwei Geraden berechnen
            int ga[3], gb[3], ha[3], hb[3];
            for(int i = 0; i < 3; i++) {
                cout << "\nGeben Sie den " << (i + 1) << ". Wert für die erste Gerade ein: "; 
                cin >> ga[i];
            }
            for(int i = 0; i < 3; i++) {
                cout << "\nGeben Sie den " << (i + 1) << ". Wert für die zweite Gerade ein: "; 
                cin >> gb[i];
            }
            for(int i = 0; i < 3; i++) {
                cout << "\nGeben Sie den " << (i + 1) << ". Wert für die erste Gerade ein: "; 
                cin >> ha[i];
            }
            for(int i = 0; i < 3; i++) {
                cout << "\nGeben Sie den " << (i + 1) << ". Wert für die zweite Gerade ein: "; 
                cin >> hb[i];
            }

            int SkalarErgebnis = Skalarprodukt(gb, hb);

            double magnitudeA = sqrt(gb[0] * gb[0] + gb[1] * gb[1] + gb[2] * gb[2]);
            double magnitudeB = sqrt(hb[0] * hb[0] + hb[1] * hb[1] + hb[2] * hb[2]);

            double cosTheta = SkalarErgebnis / (magnitudeA * magnitudeB);

            double angleRadians = acos(cosTheta);
            double angleDegrees = angleRadians * (180.0 / 3.14159265);

            cout << "\nDer Winkel zwischen den Geraden beträgt: " << angleDegrees << " Grad" << endl;
            break;
        }
        case 2: { // Den Schnittwinkel zwischen zwei Ebenen berechnen
            cout << "\nGeben Sie die Normalenvektoren für die beiden Ebenen ein." << endl;
            for(int i = 0; i < 3; i++) {
                cout << "\nGeben Sie den " << (i + 1) << ". Wert für den Normalenvektor der ersten Ebene ein: "; 
                cin >> nE[i];
            }
            for(int i = 0; i < 3; i++) {
                cout << "\nGeben Sie den " << (i + 1) << ". Wert für den Normalenvektor der zweiten Ebene ein: "; 
                cin >> nF[i];
            }

            // Berechne das Skalarprodukt der Normalenvektoren
            int SkalarErgebnis = Skalarprodukt(nE, nF);

            // Berechne die Beträge der Normalenvektoren
            double BetragE = Betrag(nE);
            double BetragF = Betrag(nF);

            // Berechne den Kosinus des Winkels
            double cosAlpha = SkalarErgebnis / (BetragE * BetragF);

            // Berechne den Winkel in Grad
            double angleRadians = acos(cosAlpha);
            double angleDegrees = angleRadians * (180.0 / 3.14159265);

            cout << "\nDer Winkel zwischen den Ebenen beträgt: " << angleDegrees << " Grad" << endl;
            break;
        }
        case 3: { // Den Schnittwinkel zwischen einer Geraden und einer Ebene berechnen
						int u[3];
						for(int i = 0; i <= 2; i++) {
							cout << "Geben Sie die " << i+1 << ". Richtungsvektor der Geraden ein: ";
							cin >> u[i];
						}

						int n[3];
						for(int i = 0; i <= 2; i++) {
							cout << "Geben Sie die " << i+1 << ". Normalenvektoren der Ebenen ein: ";
							cin >> n[i];
						}

            // Berechne das Skalarprodukt der Vektoren u und n
            int SkalarErgebnis = Skalarprodukt(u, n);

            // Berechne die Beträge der Vektoren u und n
            double BetragU = Betrag(u);
            double BetragN = Betrag(n);

            // Berechne den Sinus des Winkels
            double sinAlpha = abs(SkalarErgebnis) / (BetragU * BetragN);

            // Berechne den Winkel in Grad
            double angleRadians = asin(sinAlpha); // Hier verwenden wir asin für den Sinus-Wert
            double angleDegrees = angleRadians * (180.0 / 3.14159265);

            cout << "\nDer Winkel zwischen der Geraden und der Ebene beträgt: " << angleDegrees << " Grad" << endl;
            break;
        }
        default:
            cout << "\nFalsche Eingabe." << endl;
            return 1;
    }

			cout << "\nMoechten Sie nochmal das Programm verwenden? (J, N)";
			cin >> mainVariable;
			if(mainVariable == "j" || mainVariable == "J") {
				cout << "\nOk.";
			}
			else {
				cout << "\nTschuess!";
				return 0;
			}
		}








    return 1;
}
