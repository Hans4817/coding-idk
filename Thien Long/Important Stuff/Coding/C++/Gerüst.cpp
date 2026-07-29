#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	// Code //
	

	
	// Code //




	string Abfrage;
	cout << "\nMoechten Sie nochmal? (J,N) ";
	cin >> Abfrage;
	while(true) {
		 if(Abfrage == "J" || Abfrage == "j") {
		 	cout << "Alles klar.\n\n";
		 	cout << main();
		 }
		 else {
		 	cout << "Bye Bye";
		 	return 0;
		 }
	}

	return 1;
}