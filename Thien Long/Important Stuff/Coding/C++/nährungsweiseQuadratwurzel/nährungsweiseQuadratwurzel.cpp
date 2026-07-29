#include <iostream>
#include <iomanip>  //keine ahnung
using namespace std;

int main() {
    while (true) {
        float Quadrat, ObererWert, Kommar;
        float UntererWert = 1;
        float Schritte;
        
        cout << "Geben Sie die Quadratwurzel ein: "; 
        cin >> Quadrat;
        
        cout << "\nGeben Sie ObererWert ein: "; 
        cin >> ObererWert;
        
        cout << "\nWie viele Kommarzahlen wollen Sie haben? "; 
        cin >> Kommar;
        cout << "\nGeben Sie die Schritte ein: "; cin >> Schritte;
        cout << "\n\nSchritt | Links | Rechts | Mittelwert | Mittelwert^2" << endl;

        for (int i = 1; i <= Schritte; i++) {
            float Mittelwert = (UntererWert + ObererWert) / 2;
        	cout << i << "\t " <<UntererWert << "\t " << ObererWert << "\t " << Mittelwert << "\t\t " << Mittelwert * Mittelwert << endl;
            if (Mittelwert * Mittelwert > Quadrat) {
                ObererWert = Mittelwert;
            } else {
                UntererWert = Mittelwert;
            }
        }
        
        float Mittelwert = (UntererWert + ObererWert) / 2;
        cout << fixed << setprecision(Kommar); //Alle Zahlen müssen mit Variable Kommar ausgegeben werden.
        cout << "Der Quadratwurzel von " << Quadrat << " ist ungefaehr: " << Mittelwert << endl;
        
        string Abfrage;
        cout << "\nMoechten Sie nochmal? (J,N) ";
        cin >> Abfrage;
        if (Abfrage != "J" && Abfrage != "j") {
            cout << "Bye Bye" << endl;
            break;
        } else {
            cout << "Alles klar.\n\n";
        }
    }
    
    return 0;
}
