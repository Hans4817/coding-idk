#include <iostream>
using namespace std;

int main() {
	double i;
	double input;
	double Speicher = 0;
	double ausgabe = 0;
	cout << "Wie viele fächer haben sie?";
	cin >> i;

	for(int g = 1; g <= i; g++) {
			cout << g << ". Note: ";
			cin >> input;
			Speicher += input;
		}
	
	ausgabe = Speicher / i;
	cout << "Durchschnitt: ";
	cout << ausgabe;


}