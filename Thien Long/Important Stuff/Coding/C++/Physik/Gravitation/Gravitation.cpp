#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	//Reihenschaltund und Parralelschaltung Menu wie viele Konsentator. 
	float G = 6.67 * pow(10, -11);
	float Me;
	float Mm;
	float r = 1.496 * pow(10, 11);
	//Mondentfernung zwischen Erde und Mond 3.82*10^8M 3.82* pow(10, 8)
	cout << "Geben Sie die Erdmasse in Kg ein: ";
	cin >> Me;

	cout << "\nGeben Sie die Mondmasse in Kg ein: ";
	cin >> Mm;


	float F = G * ((Me * Mm) / (r * r));

	cout << "\n\nGravitationkraft: " << F << "Newten.";

	return 0;
}