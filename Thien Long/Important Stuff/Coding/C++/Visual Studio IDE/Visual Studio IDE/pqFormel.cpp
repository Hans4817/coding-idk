#include <iostream>
#include <math.h>
#include <vector>
using namespace std;


int main() {
	float x, p, q;
	cout << "_x^2 + _x + _ = 0";
	cout << endl << "Geben Sie x ein: "; cin >> x;

	cout << endl << x << "x^2 + _x + _ = 0";
	cout << endl << "Geben Sie p ein: "; cin >> p;

	cout << endl << x << "x^2 + " << p << "x + _ = 0";
	cout << endl << "Geben Sie q ein: "; cin >> q;
	cout << endl << x << "x^2 + " << p << "x + " << q << " = 0" << endl;

	p = p / x;
	q = q / x;

	float x1 = -(p / 2);
	double diskriminante = sqrt((p / 2) * (p / 2) - q);
	double x2 = sqrt((p / 2) * (p / 2) - q);
	
	if (diskriminante > 0) {
		cout << "x1: " << x1 + x2 << endl << "x2: " << x1 - x2;
	}
	else if (diskriminante == 0) {
		cout << "Die doppelte Nullstelle ist: x = " << x1;
		return 0;
	}
	else {
		cout << "Es gibt keine reellen Nullstellen, da die Diskriminante negativ ist.";
	}

	return 0;
}