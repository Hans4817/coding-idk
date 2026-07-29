#include <iostream>
#include <string.h>
using namespace std;

class CBuch {
public:
	char Autor[100];
	char Title[100];

	void Ausgabe() {
		cout << Autor << endl;
		cout << Title << endl;
	}
	
} einbuch;

int main() {
	cout << "Geben sie die Autor des Buches ein: ";
	cin >> einbuch.Autor;
	cout << "Geben sie den Title des Buches ein: ";
	cin >> einbuch.Title;

	einbuch.Ausgabe();

	return 0;
}