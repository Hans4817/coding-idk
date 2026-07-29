#include <iostream>
using namespace std;

class CSkaler
{
public:
	int Skalar;
	int Erste;
	int Zweite;
	int Dritte;

// "\t" = 8
	void Vektor2D() {
		cout << "    " << Erste << "\t" << Erste*Skalar << endl;
		cout << Skalar << "*    =" << endl;
		cout << "    " << Zweite << "\t" << Zweite*Skalar; 

	}
	void Vektor3D() {
		cout << "   " << Erste << "\t" << Erste*Skalar << endl;
		cout << Skalar << "* " << Zweite << " =  " << Zweite*Skalar << endl;
		cout << "   " << Dritte << "\t" << Dritte*Skalar;
	}

	
}Vector;




int Input(string a) {
	if(a != "2D" && a != "3D") {
		return 1;
	}
	if(a == "2D") {
		cout << "Geben sie ein Skalar ein: ";
		cin >> Vector.Skalar;

		cout << "Geben sie den ersten Komponent des ersten Vektor ein: ";
		cin >> Vector.Erste;
		cout << "Geben sie den zweiten Komponent des ersten Vektor ein: ";
		cin >> Vector.Zweite;

		Vector.Vektor2D();
	}
	else {
		cout << "Geben sie ein Skalar ein: ";
		cin >> Vector.Skalar;

		cout << "Geben sie den ersten Komponent des zweiten Vektor ein: ";
		cin >> Vector.Erste;
		cout << "Geben sie den zweiten Komponent des zweiten Vektor ein: ";
		cin >> Vector.Zweite;
		cout << "Geben sie den dritten Komponent des zweiten Vektor ein: ";
		cin >> Vector.Dritte;

		
		Vector.Vektor3D();

	}	
}
//Komponent
int main() {
	string a;
	cout << "Moechten Sie Vektor 2D (2D) oder Vektor 3D (3D)? ";
	cin >> a;
	Input(a);

	return 0;
}