#include <iostream>
using namespace std;




int main(int argc, char const *argv[])
{
	while (true) {
			float Basic_Tarif[2] = {30,0.25};
			float Family_Tarif[2] = {40,0.15};   
			float Business_Tarif[2] = {50,0.10}; 
		    int dauerTelefonats; 
			string eingabe_Tarif; 
			string abfrageNeustart;


			cout << "Tarifauswahl und Kostenberechnung fuer Telefonate\n\n";
			cout << "Vodafon Tarif:\n* Fixkosten (b): $30\n* Kosten pro minute (m): EUR 0.25\nEingabe Schluessel: ""A"" ";
			cout << "\n\nO2 Tarif:\n* Fixkosten (b): $40\n* Kosten pro minute (m): EUR 0.15\nEingabe Schluessel: ""B"" ";
			cout << "\n\nOne and One Tarif:\n* Fixkosten (b): $50\n* Kosten pro minute (m): EUR 0.10\nEingabe Schluessel: ""C"" ";
			cout << "\n\nWaehlen Sie einen Tarif (A/B/C): "; cin >> eingabe_Tarif;
			cout << "\nGeben Sie die Dauer des Telefonats in Minuten ein: ";
			cin >> dauerTelefonats;

			if(eingabe_Tarif == "A") {
				cout << "Gesamtkosten fuer Tarif A: EUR " << Basic_Tarif[1] * dauerTelefonats + Basic_Tarif[0];
			}
			else if(eingabe_Tarif == "B") {
				cout << "Gesamtkosten fuer Tarif B: EUR " << Family_Tarif[1] * dauerTelefonats + Family_Tarif[0];
			}
			else if(eingabe_Tarif == "C") {
				cout << "Gesamtkosten fuer Tarif C: EUR " << Business_Tarif[1] * dauerTelefonats + Business_Tarif[0];
			}
			else {
				cout << "Ungueltiger Eingabe.";
				return 1;
			}
			cout << "\n\nWuenchen Sie einen anderen Tarif abzufragen? (J,N)"; cin >> abfrageNeustart;
			if(abfrageNeustart == "J") {
				continue;
			}
			else {
				cout << "\nBis zum naechsten mal!";
				return 0;
			}
	}
	return 0;
}