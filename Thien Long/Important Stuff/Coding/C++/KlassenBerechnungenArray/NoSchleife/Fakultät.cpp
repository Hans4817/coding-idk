#include <iostream>
using namespace std;

int Fakultaet(int Grenze, int one = 1, int Fakultaetusw = 1) {
	if(one-1 > Grenze) {
		return Fakultaetusw;
	}
	else {
		cout << "Die Fakultaet von " << one-1 << " ist " << Fakultaetusw << endl;
		Fakultaetusw *= one;
		return Fakultaet(Grenze, one+1, Fakultaetusw);
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
		cout << "Geben Sie die grenze der Fakultaet ein: "; cin >> Grenze;
		Fakultaet(Grenze);
		Abfrage(MoechtenSieNochmal);
}

int main() {
	Anfang();
	return 0;
}
