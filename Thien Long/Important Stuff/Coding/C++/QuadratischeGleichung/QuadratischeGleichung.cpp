#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	float a, b, c;
 	cout << "ax^2+bx+c = 0\n";
 	cout << "\nGeben Sie der Parameter von a ein: "; cin >> a;
 	cout << "\nGeben Sie der Parameter von b ein: "; cin >> b;
 	cout << "\nGeben Sie der Parameter von c ein: "; cin >> c;

 	float x1 = (-b + (sqrt((b*b) - 4 * a*c))) / (2*a);
 	float x2 = (-b - (sqrt((b*b) - 4 * a*c))) / (2*a);
 	cout << "\nx1 = " << x1;
 	cout << "\nx2 = " << x2;
 	return 0;
}