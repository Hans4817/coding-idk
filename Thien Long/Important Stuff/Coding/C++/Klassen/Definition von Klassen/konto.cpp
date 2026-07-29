#include "konto.h"
#include <iostream>
#include <iomanip>
using namespace std;

bool Konto::init(const string& i_name, unsigned long i_nr, double i_stand) {
	if(i_name.size() < i)
		return false;
	name = i_name;
	nr = i_nr;
	stand = i_stand;
	return true;
}

void Konto::display() {
	cout << fixed << setprecision(2)
		 << "---------------------------------\n"
		 << "Kontoinhaber:  " << name << "\n"
		 << "Kontonummer:   " << nr << "\n"
		 << "Kontostand:    " << stand << "\n"
		 << "---------------------------------\n"
		 << endl;

}