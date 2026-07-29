#include <iostream>
using namespace std;

class CVektor {
public:
	int Erste;
	int Zweite;
	int Dritte;
	int Vierte;
	int Fuenfte;
	int Sechste;

	void Vector2D() {
		cout << Erste << "     " << Dritte << endl;
		cout << "   *      = " << (Erste*Dritte) + (Zweite*Vierte) << endl;
		cout << Zweite << "     " << Vierte;
	}
	void Vector3D() {
		cout << Erste << "    " << Vierte << endl;
		cout << Zweite << "  *  " << Fuenfte << "  = " << (Erste*Vierte) + (Zweite*Fuenfte) + (Dritte*Sechste) << endl;
		cout << Dritte << "    " << Sechste;
	}

	

} Vector;

int Input(string a) {
	if(a != "2D" && a != "3D") {
		return 1;
	}
	if(a == "2D") {


		cout << "Geben sie den ersten Komponent des ersten Vektor ein: ";
		cin >> Vector.Erste;
		cout << "Geben sie den zweiten Komponent des ersten Vektor ein: ";
		cin >> Vector.Zweite;
		cout << "Geben sie den dritten Komponent des ersten Vektor ein: ";
		cin >> Vector.Dritte;
		cout << "Geben sie den vierten Komponent des ersten Vektor ein: ";
		cin >> Vector.Vierte;
		Vector.Vector2D();
	}
	else {


		cout << "Geben sie den ersten Komponent des zweiten Vektor ein: ";
		cin >> Vector.Erste;
		cout << "Geben sie den zweiten Komponent des zweiten Vektor ein: ";
		cin >> Vector.Zweite;
		cout << "Geben sie den dritten Komponent des zweiten Vektor ein: ";
		cin >> Vector.Dritte;
		cout << "Geben sie den vierten Komponent des zweiten Vektor ein: ";
		cin >> Vector.Vierte;
		cout << "Geben sie den fuenften Komponent des zweiten Vektor ein: ";
		cin >> Vector.Fuenfte;
		cout << "Geben sie den sechsten Komponent des zweiten Vektor ein: ";
		cin >> Vector.Sechste;
		
		Vector.Vector3D();

	}	
}
//Komponent
int main() {
	string a;
	cout << "Moechten sie Vektor 2D (2D) oder Vektor 3D (3D)? ";
	cin >> a;
	Input(a);

	return 0;
}