#include <iostream>
using namespace std;

int main() {
	int Geld;
	string i = "Penis";
	string i1;
	for(int Grenze = 3; Grenze >= 0; Grenze--) {
	  cout << "\nPasswort: ";
	  cin >> i1;
	  if(Grenze == 0) {
	  	cout << "Ihre Karte wurde gesperrt.";
	  	break;
	  }
	  if(i == i1) {
	  	  cout << "Wie viel Geld moechten Sie abheben?";	
	  	  cin >> Geld;
	  	  cout << "Hier haben Sie ihren " << Geld << " Euro.";

	  	  break;
	  }
	  else {
		  cout << "Sie haben noch ";
		  cout << Grenze;
		  cout << " Versuche.";
	  }
	 }
}


