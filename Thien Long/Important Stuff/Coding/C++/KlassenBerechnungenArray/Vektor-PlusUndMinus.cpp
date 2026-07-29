#include <iostream>
using namespace std;

class CVektor {
public:
	int ErsteAddition;
	int ZweiteAddition;
	int DritteAddition;
	int VierteAddition;
	int FuenfteAddition;
	int SechsteAddition;

	
	void AdditionTerm2D(string a) {
		if(a == "+") {
        	cout << ErsteAddition << "\t" << DritteAddition << "\t" <<ErsteAddition + DritteAddition << endl;

        	cout << endl <<"     +     =\n" << endl;
        
        	cout << ZweiteAddition << "\t" << VierteAddition << "\t" <<ZweiteAddition + VierteAddition << endl;
		}
		else {
        	cout << ErsteAddition << "\t" << DritteAddition << "\t" <<ErsteAddition - DritteAddition << endl;

        	cout << endl <<"     -     =\n" << endl;
        
        	cout << ZweiteAddition << "\t" << VierteAddition << "\t" <<ZweiteAddition - VierteAddition << endl;
		}

	}
	void AdditionTerm3D(string a) {
		if(a == "+") {
        	cout << ErsteAddition << "\t" << VierteAddition << "\t" << ErsteAddition+VierteAddition << endl;
        	cout << endl;
        	cout << ZweiteAddition << "   +   " << FuenfteAddition << "   =   " << ZweiteAddition+FuenfteAddition;
        	cout << "\n\n";
        	cout << DritteAddition << "\t" << SechsteAddition << "\t" <<DritteAddition+SechsteAddition;
		}
		else {
			cout << ErsteAddition << "\t" << VierteAddition << "\t" << ErsteAddition-VierteAddition << endl;
        	cout << endl;
        	cout << ZweiteAddition << "   -   " << FuenfteAddition << "   =   " << ZweiteAddition-FuenfteAddition;
        	cout << "\n\n";
        	cout << DritteAddition << "\t" << SechsteAddition << "\t" <<DritteAddition-SechsteAddition;
		}
	}
} Vector;

int Input(string a) {
	if(a != "2D" && a != "3D") {
		return 1;
	}
	if(a == "2D") {
		string a;
		cout << "Wollen Sie Minus oder Plus rechnen? (Plus = + ; Minus = -) ";
		cin >> a;

		cout << "Geben sie den ersten Komponent des ersten Vektor ein: ";
		cin >> Vector.ErsteAddition;
		cout << "Geben sie den zweiten Komponent des ersten Vektor ein: ";
		cin >> Vector.ZweiteAddition;
		cout << "Geben sie den dritten Komponent des ersten Vektor ein: ";
		cin >> Vector.DritteAddition;
		cout << "Geben sie den vierten Komponent des ersten Vektor ein: ";
		cin >> Vector.VierteAddition;
		Vector.AdditionTerm2D(a);
	}
	else {
		string a;
		cout << "Wollen Sie Minus oder Plus rechnen? ";
		cin >> a;

		cout << "Geben sie den ersten Komponent des zweiten Vektor ein: ";
		cin >> Vector.ErsteAddition;
		cout << "Geben sie den zweiten Komponent des zweiten Vektor ein: ";
		cin >> Vector.ZweiteAddition;
		cout << "Geben sie den dritten Komponent des zweiten Vektor ein: ";
		cin >> Vector.DritteAddition;
		cout << "Geben sie den vierten Komponent des zweiten Vektor ein: ";
		cin >> Vector.VierteAddition;
		cout << "Geben sie den fuenften Komponent des zweiten Vektor ein: ";
		cin >> Vector.FuenfteAddition;
		cout << "Geben sie den sechsten Komponent des zweiten Vektor ein: ";
		cin >> Vector.SechsteAddition;
		
		Vector.AdditionTerm3D(a);

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