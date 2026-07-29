#include <iostream>
using namespace std;

int Summe(int Grenze, int one = 1, int SummeErgebnis = 0) {
	if(Grenze < one-1) {
		return SummeErgebnis;
	}
	else {
		cout << "Die Summe von " << one-1 << " ist " << SummeErgebnis << endl;
		SummeErgebnis += one;
		return Summe(Grenze, one+1, SummeErgebnis);
	}
}
int Anfang();

int Abfrage(string MoechtenSieNochmal) {
		cout << "\nMoechten Sie nochmal das Programm benutzen? (J = Ja, N = Nein)"; cin >> MoechtenSieNochmal;
		if(MoechtenSieNochmal == "N" || MoechtenSieNochmal == "n") {
			cout << "Bye";
			return 0;
		}
		if(MoechtenSieNochmal == "J" || MoechtenSieNochmal == "j") {
			cout << "\nAlles klar.\n\n";
			Anfang();
		}
		else {
			cout << "\nFalsche eingabe";
			Abfrage(MoechtenSieNochmal);
			return 1;
		}
}

int Anfang() {
		int Grenze = 0;
		string MoechtenSieNochmal = "";
		cout << "Geben Sie die grenze der Summe ein: "; cin >> Grenze;
		Summe(Grenze);
		Abfrage(MoechtenSieNochmal);
}

int main() {
	Anfang();
	return 0;
}
