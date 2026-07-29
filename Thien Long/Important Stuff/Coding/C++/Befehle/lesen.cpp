#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream dat_ein;
	string dateiname;

	cout << "Geben sie den Namen der Datei ein: ";
	cin >> dateiname;
	cout << endl;

	dat_ein.open(dateiname.c_str(), ios_base::in);

	if(!dat_ein) {
		cout << "Datei konnte nicht geoeffnet werden!";
		cout << endl;
		return -1;
	}

	char zeichen;
	while(!dat_ein.eof()) {
		dat_ein.get(zeichen);
		cout << zeichen;
	}

	return 0;
}