#include <iostream>
using namespace std;

/* Funktion */
int Entscheidung() {
	int i;
	
	cout << "Geben sie eine belibiege ganze zahl ein.\n";
	cin >> i;
	if(i % 2 == 0) {
		cout << "Es ist eine gerade Zahl.\n";
	}
	else {
		cout << "Es ist eine ungerade Zahl.\n";
	}
}
/* Funktion */

/* Hauptprogram */
int main() {
string abfrage; //String
Entscheidung(); //Funktion
while(true) { //while schleife
	cout << "Moechten sie nochmal benutzen? j/n\n"; //output
	cin >> abfrage; //input
	if(abfrage == "j") { //if
		Entscheidung(); //Funktion
	}
	else { //else
		cout << "elon musk."; //output
		break; //break
	}

  }
}