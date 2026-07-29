#include <iostream>
#include <string.h>
using namespace std;

class CBuch {
public:
	char Autor[100];
	char Title[100];
	
	void Ausgabe();
} einBuch;

inline void CBuch::Ausgabe() {
	cout << Autor << endl;
	cout << Title << endl;
}

int main() {
	cout << "Geben sie die Autor des Buches ein: ";
	cin >> einBuch.Autor;
	cout << "Geben sie den Title des Buches ein: ";
	cin >> einBuch.Title;

	einBuch.Ausgabe();
	return 0;
}