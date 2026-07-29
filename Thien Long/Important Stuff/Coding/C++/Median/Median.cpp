#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
	int Begrenzt;
	cout << "Median";
	cout << "\nGeben Sie die begrenzen Zahl ein (mind. 2): ";
	cin >> Begrenzt;
	float Median[Begrenzt];
	for(int i = 0; i < Begrenzt; i++) { // Abfrage
		cout << "\nGeben Sie die " << i+1 << ". Zahlen ein: ";
		cin >> Median[i];
	}
	if(Begrenzt == 1) { // mind. 2
		cout << "Geben Sie mind. 2 Zahlen ein:";
		return 1;
	}

	// Sortierung
	cout << "\nVor der Sortierung: ";
	for(int i = 0; i < Begrenzt; i++) {
		cout << Median[i] << " ";
	}
    int n = sizeof(Median) / sizeof(Median[0]);
    sort(Median, Median + n);
    cout << "\nNach der Sortierung: ";
    for(int i = 0; i < Begrenzt; i++) {
    	cout << Median[i] << " ";
    }
	cout << endl;
	// Sortierung

	int nGrenze[Begrenzt];
	for(int i = 0; i < Begrenzt; i++) { // nGrenze
		nGrenze[i] = i+1;
	}

	cout << "\nDer Median ist: ";

	if(Begrenzt == 2) {
		cout << (Median[0] + Median[1]) / 2 << endl;
	}
	else if(Begrenzt % 2 == 0) {
	    int originalBegrenzt = Begrenzt;
	    originalBegrenzt--;

		for(int i = 0; i < Begrenzt; i++) {
			if(nGrenze[i] + 3 == nGrenze[originalBegrenzt]) {
				cout << (Median[i] + Median[originalBegrenzt]) / 2 << endl;
			}
			originalBegrenzt--;
		}
	}
	else {
	    int originalBegrenzt = Begrenzt;
	    originalBegrenzt--;

	    for(int i = 0; i < Begrenzt; i++) {
	        if(nGrenze[i] == nGrenze[originalBegrenzt]) {
	            cout << Median[i] << endl;
	        }
	        originalBegrenzt--;
	    }
	}
	string Abfrage;
	cout << "Moechten Sie nochmal? (J,N) ";
	cin >> Abfrage;
	while(true) {
		 if(Abfrage == "J" || Abfrage == "j") {
		 	cout << "Alles klar.\n\n";
		 	cout << main();
		 }
		 else {
		 	cout << "Bye Bye";
		 	return 0;
		 }
	}


	return 1;
}