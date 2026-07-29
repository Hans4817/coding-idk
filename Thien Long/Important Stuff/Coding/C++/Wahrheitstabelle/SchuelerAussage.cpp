#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string abfrage;
	cout << "Der Schueler ist nicht unfaehig zu lernen.\nIst der Schueler faehig oder unfaehig zu lernen?\n(j,n)";
	cin >> abfrage;

	if(abfrage == "n" || abfrage == "N") {
		cout << "\nFalsch!";
	}
	else {
		cout << "\nRichtig!";
	}
	cout << "\n\nBeweis: \n";

	cout << "Doppelte Negation\n";
	cout << "a b  |  !(!a)\n";
	cout << "--------+---------------\n";
	for(int a = 0; a <= 1; a++) 

				cout << " " << a << " " << " |    " << !(!a) << "\n";
		   
			

	return 0;
}