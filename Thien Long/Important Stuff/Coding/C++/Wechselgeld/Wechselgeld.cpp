#include <iostream>
using namespace std;

int scheine[] = {1, 2, 5, 10, 20, 50, 100, 200, 500};

void auszahlen(int restbetrag, int index, int kombination[]) {
    if (restbetrag == 0) {
        for (int i = 0; i < 9; ++i) {
            if (kombination[i] > 0) {
                cout << kombination[i] << " x " << scheine[i] << "-Euro";
                if (i < 2 && (kombination[i + 1] > 0 || kombination[i + 2] > 0)) {
                    cout << ", ";
                }
            }
        }
        cout << endl;
        return;
    }

    if (index >= 9) return;

    for (int i = 0; i <= restbetrag / scheine[index]; ++i) {
        kombination[index] = i;
        auszahlen(restbetrag - i * scheine[index], index + 1, kombination);
    }
    kombination[index] = 0;
}

int main() {
	while(true) {
	    int Euro;
	    cout << "Geben Sie einen Geldbetrag ein: ";
	    cin >> Euro;

	    int kombination[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	    cout << "Moegliche Kombinationen zur Auszahlung des Betrags " << Euro << " Euro:\n";
	    auszahlen(Euro, 0, kombination);
	    string Abfrage;
	 	cout << "Moechten Sie nochmal? (J,N) ";
	 	cin >> Abfrage;

	 	if(Abfrage == "J" || Abfrage == "j") {
	 		cout << "Alles klar.\n\n";
	 	}
	 	else {
	 		cout << "Bye Bye";
	 		return 0;
	 	}
	}

    return 1;
}