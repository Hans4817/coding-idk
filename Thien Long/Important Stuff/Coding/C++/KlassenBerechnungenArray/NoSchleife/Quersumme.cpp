#include <iostream>
using namespace std;

int j = 0;
int Quersumme(int num) {
	if(num < 10) return num;
	j++;
	return num % 10 + Quersumme(num/10);
}

int main(int argc, char const *argv[])
{
	while (true) {
		j = 0;
		int QuersummeVariable;
		cout << "Geben Sie eine Zahl ein:"; cin >> QuersummeVariable;
		cout << "Quersumme lautet: " << Quersumme(QuersummeVariable);
		cout << "\ndebug: " << j;
		int Frage;
		cout << "\n\nMoechten Sie nochmal? (Ja = 1, Nein = 2): "; cin >> Frage;

		cout << ((Frage == 1) ? "\nAlles klar!\n\n" 
		           : (Frage == 2) ? "\nBye" 
		           : "\nFalsche Eingabe.");
		if (Frage != 1) return 0;
	}
	return 1;
}