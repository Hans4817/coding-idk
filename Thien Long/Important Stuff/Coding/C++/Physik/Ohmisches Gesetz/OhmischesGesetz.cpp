#include <iostream>
using namespace std;

int OhmischesGesetz() {
	while (true) {
		int abfrage;
		float Widerstand = 0;
		float Stromstaerke = 0;
		float Spannung = 0;
		cout << "Ohmisches Gesetz\nMoechten Sie Widerstand, Stromstaerke oder Spannung berechnen? (1,2,3)";
		cin >> abfrage;

		if(abfrage == 1) {
			cout << "\nR=U/I";
			cout << "\nGeben Sie die Spannung in Volt ein: "; cin >> Spannung;
			cout << "\nGeben Sie die Stromstaerke in Ampere ein: "; cin >> Stromstaerke;
			float Ergebnis = Spannung / Stromstaerke;
			cout << "\nWiderstand: " << Ergebnis << " Ohm";
		}
		else if(abfrage == 2) {
			cout << "\nI=U/R";
			cout << "\nGeben Sie die Spannung in Volt ein: "; cin >> Spannung;
			cout << "\nGeben Sie die Widerstand in Ohm ein: "; cin >> Widerstand;
			float Ergebnis = Spannung / Widerstand;
			cout << "\n\nStromstaerke: " << Ergebnis << " Ampere";
		}
		if(abfrage == 3) {
			cout << "\nU=I*R";
			cout << "\nGeben Sie die Stromstaerke in Ampere ein: "; cin >> Stromstaerke;
			cout << "\nGeben Sie die Widerstand in Ohm ein: "; cin >> Widerstand;
			float Ergebnis = Stromstaerke * Widerstand;
			cout << "\nSpannung: " << Ergebnis << " Volt";
		}
		string abfrageProgramm;
		cout << "\nMoechten Sie erneut das Programm starten? (J,N)"; cin >> abfrageProgramm;
		if(abfrageProgramm == "J") {
			cout << endl;
			continue;
		}
		else {
			cout << "Auf Wiedersehen!";
		}
	}
}




int Reihenschaltung() {
	int Widerstand;
	float Spannung;
	float Gesamt = 0;
	cout << "\nWie gross soll Spannung in Volt sein? "; 
	cin >> Spannung;
	cout << "\nWie viel Widerstaende in Ohm moechten Sie haben? "; 
	cin >> Widerstand;
	float WiderstandArray[Widerstand];
	for(int i = 0; i < Widerstand; i++) {
		cout << i+1 << ". Eingabe: "; 
		cin >> WiderstandArray[i];
		cout << endl;
		Gesamt = Gesamt + WiderstandArray[i];
	}
	cout << "\nEs ist " << Gesamt << " Ohm gross.";
	cout << "\nStromstaerke ist: " << Spannung/Gesamt << " Ampere gross.";
	return 0;
}

int Parralelschaltung() {
	int eingabeEingabe;
	int Spannung;


	cout << "Geben Sie die Spannung in Volt ein: "; cin >> Spannung;
	cout << "\nWie viele Widerstaende in Ohm wollen Sie haben? ";
	cin >> eingabeEingabe;

	float Widerstand[eingabeEingabe];
	float Stromstaerke[eingabeEingabe];
	float gesamtWiderstand = 0;

	cout << "\nGeben Sie die Widerstand in Ohm ein:";
	for(int i = 0; i < eingabeEingabe; i++) {
		cout << "\nR" << i+1 << ": "; cin >> Widerstand[i];
		Stromstaerke[i] = Spannung / Widerstand[i];
		gesamtWiderstand = gesamtWiderstand + 1 / Widerstand[i];
	}


	gesamtWiderstand = 1 / gesamtWiderstand;
	cout << "\n\nWiderstand gesamt: " << gesamtWiderstand << " Ohm";
	cout << "\nStromstaerke gesamt: " << Spannung / gesamtWiderstand << " Ampere";
	for(int i = 0; i < eingabeEingabe; i++) {
		cout << "\nStromstaerke bei R" << i+1 << ": " << Stromstaerke[i] << " Ampere";
	}

	return 0;
}



int main(int argc, char const *argv[])
{
	int abfrage1;
	cout << "Physik: Ohmsches Gesetz\n";
	cout << "\n\nOption:";
	cout << "\n*OhmischesGesetz\nSchluesseleingabe: 1\n";
	cout << "\n*Reihenschaltung\nSchluesseleingabe: 2\n";
	cout << "\n*Parralelschaltung\nSchluesseleingabe: 3\n\nEingabe: ";
	cin >> abfrage1;

	if(abfrage1 == 1) {
		OhmischesGesetz();
	}
	else if(abfrage1 == 2) {
		Reihenschaltung();
	}
	else if(abfrage1 == 3) {
		Parralelschaltung();
	}
	else {
		cout << "\nInvalid input.";
		return 1;
	}

	return 0;
}