#include <iostream>
using namespace std;

void WerteTabelle(double mx, double y_Achsenabschnitt) {
	double mxErgebnis[11];
	cout << "f(x) = " << mx << "x + " << y_Achsenabschnitt;
	cout << "\n\nx| ";
	for(int i = 0; i <= 10; i++) {
		cout << i << "  ";
		mxErgebnis[i] = (mx * i + y_Achsenabschnitt);
	}
	cout << endl;
	cout << "y| ";
	for(int i = 0; i <= 10; i++) {
		cout << mxErgebnis[i] << "  ";
	}
	cout << endl;
}

void FunktionErmittlung(double x1, double x2, double y1, double y2) {

	double m = (y2 - y1) / (x2 - x1);
	double b = (y1 - m*x1);

	cout << "f(x) = " << m << "x + " << b << endl; 
}

int main(int argc, char const *argv[])
{
	string MenuInput;
	double mx;
	double y_Achsenabschnitt;
	double x1;
	double x2;
	double y1;
	double y2;

	cout << "Lineare Funktion\nf(x) = mx + b" << endl;
	cout << "Moechten Sie die Wertetabelle ermitteln oder die Funktion ermitteln?\n[Wertetabelle,FunktionErmittlung]" << endl;
	cin >> MenuInput;
	if(MenuInput == "Wertetabelle") {
		cout << "Geben Sie die Steigung [m] ein: ";
		cin >> mx;
		cout << "\nGeben Sie die y-Achsenabschnitt ein: ";
		cin >> y_Achsenabschnitt;
		WerteTabelle(mx, y_Achsenabschnitt);
	}
	else if(MenuInput == "FunktionErmittlung") {
		cout << "Geben Sie bei X-achse Punkt 1 ein: ";
		cin >> x1;
		cout << "\nGeben Sie bei X-achse Punkt 2 ein: ";
		cin >> x2;
		cout << "\nGeben Sie bei y-achse Punkt 1 ein: ";
		cin >> y1;
		cout << "\nGeben Sie bei y-achse Punkt 2 ein: ";
		cin >> y2;
		FunktionErmittlung(x1,x2,y1,y2);
	}

	return 0;
}
