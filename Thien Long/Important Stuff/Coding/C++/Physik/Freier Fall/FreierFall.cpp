#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	double h0;
	double t = 0.0;
	double Sekunde = 0.1;
	const double g = 9.81;

	cout << "Freier Fall\n\nGeben Sie die Anfangshoehe(h) in Meter ein: ";
	cin >> h0;

	double h = h0;
	cout << "Zeit (s)\tHoehe (m)\n";
	while (h > 0) {
		cout << t << "\t   " << h << endl;
		t += Sekunde;
		h = -0.5*g*(t*t) + h0;
	}

	h = h0;
	t = 0;
	cout << endl << endl << "Zeit (s)\tGeschwindigkeit (m/s)\n";
	while (h > 0) {
		cout << t << "\t   " << g * t << endl;
		t += Sekunde;
		h = -0.5*g*(t*t) + h0;
	}
	h = h0;
	t = 0;
	Sekunde = 0.0001;
	while (true) {
		t += Sekunde;
		h = -0.5*g*(t*t) + h0;
		if(h < 0) {
			cout << endl << t << ". Sekunde: " << h;
			return 0;
		}
	}

	return 0;
}
