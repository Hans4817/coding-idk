#include <iostream>
#include <cmath>
using namespace std;
//Zinsestinsen
//

int main() {
	int  k = 0, n = 0;
	const int p = 4;
	double Kn = 0;

	cout << "Wie viel Kapital haben Sie? ";
	cin >> k;
	cout << "Wir geben Sie " << p <<"% Zinsen.\n";
	cout << "Wie lange moechten Sie das Geld anlegen? ";
	cin >> n;
	cout << endl;

	double Formel = (1+(p/100.0));
    cout << "Jahr\tKapital\t\tZinsen\tRechnung\n" << endl;
    for(int i = 0; i <= n; i++) {

    	Kn=k*pow(Formel,i);
    	int Zinsen = p*Kn/100;
        int Rechnung = Kn + Zinsen;
    	cout << i << "\t" << Kn << "\t\t" << Zinsen << "\t" <<  Rechnung << endl;
    }

	return 0;
}