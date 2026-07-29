#include <iostream>
#include <vector>
#include <math.h>
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
	p = p / 2;

	float x1 = sqrt(p * p - q) - p;
	float x2 = -sqrt(p * p - q) - p;

	float y = p * p - q;

	//float x1_rightSide = sqrt((p / 2) * (p / 2)) + p / 2;
	//float x2_rightSide = sqrt((p / 2) * (p / 2)) - p / 2;
	cout << "Tiefster Punkt: S(" << -p << ", " <<  y << ")";
	cout << endl << "x1: " << x1 << endl << "x2: " << x2;
	return 0;
}