#include <iostream>
using namespace std;

void Kombination() {
	int a,b,c,d;
	cout << "Kombination\n";
	cout << "a b c d |  a AND (b  OR c) AND NOT d\n";
	cout << "----------+------------------------\n";
	for( a = 0; a <= 1; a++) 
		for( b = 0; b <= 1; b++) 
			for(c = 0; c <= 1; c++) 
				for( d = 0; d <= 1; d++)
					cout << " " << a << " " << b << " " << c << " " << d << " |          	  " << (a && (b || c) && !d) << "\n";
}

void Antivalenz() {
	cout << "Antivalenz\n";
	cout << "a b   |  a >=< b\n";
	cout << "--------+---------------\n";
	for(int a = 0; a <= 1; a++) { 
		for(int b = 0; b <= 1; b++){
			cout << " " << a << " " << b << " |    " << (!a&&b || a && !b) << "\n";
			cout << endl;
		}
	}
}

void Aequivalenz() {
	cout << "Aequivalenz\n";
	cout << "a b   |  a <=> b\n";
	cout << "--------+---------------\n";
	for(int a = 0; a <= 1; a++) { 
		for(int b = 0; b <= 1; b++){
		
			cout << " " << a << " " << b << " |    " << (!a&&!b || a && b) << "\n";

			
			cout << endl;

			}
		}
}

void Wahrheitstabelle3Variablen() {
	cout << "Wahrheitstabelle\n";
	cout << "a b c |  a && b && c\n";
	cout << "--------+---------------\n";
	for(int a = 0; a <= 1; a++) 
		for(int b = 0; b <= 1; b++) 
			for(int c = 0; c <= 1; c++) 
				cout << " " << a << " " << b << " " << c << " |    " << (a&&b&&c) << "\n";
}

void Wahrheitstabelle2Variablen() {
	cout << "Wahrheitstabelle\n";
	cout << "a b  |  a && b\n";
	cout << "--------+---------------\n";
	for(int a = 0; a <= 1; a++) 
		for(int b = 0; b <= 1; b++) 
				cout << " " << a << " " << b << " |    " << (a&&b) << "\n";
}

void TabelleOr() {
	cout << "Variable Oder\n";
	cout << "a b  |  a && b\n";
	cout << "--------+---------------\n";
	for(int a = 0; a <= 1; a++) 
		for(int b = 0; b <= 1; b++) 
				cout << " " << a << " " << b << " |    " << (a||b) << "\n";

}

void NotOperation() {
	cout << "Not Operation\n";
	cout << "a b  |  a != b\n";
	cout << "--------+---------------\n";
	for(int a = 0; a <= 1; a++) 
				cout << " " << a << " |    " << (!a) << "\n"; //Syntax: !a oder a!=b

}

void NAND() {
	cout << "NAND\n";
	cout << "a b  |  !(a && b) \n";
	cout << "--------+---------------\n";
	for(int a = 0; a <= 1; a++) 
		for(int b = 0; b <= 1; b++)
				cout << " " << a << " " << b << " |    " << !(a && b) << "\n";
}

void NOR() {
	cout << "NOR\n";
	cout << "a b  |  !(a || b)\n";
	cout << "--------+---------------\n";
	for(int a = 0; a <= 1; a++) 
		for(int b = 0; b <= 1; b++) 
				cout << " " << a << " " << b << " |    " << !(a||b) << "\n";
}


int main() {
	Kombination();
	cout << endl;
	Antivalenz();
	cout << endl;
	Aequivalenz();
	cout << endl;
	Wahrheitstabelle3Variablen();
	cout << endl;
	Wahrheitstabelle2Variablen();
	cout << endl;
	TabelleOr();
	cout << endl;
	NotOperation();
	cout << endl;
	NAND();
	cout << endl;
	NOR();

	return 0;
}
