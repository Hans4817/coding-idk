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
	strcpy(einbuch.Autor,"Bjarne Stroustrup");
	strcpy(einbuch.Title,"The C++ Programming language");

	einbuch.Ausgabe();

	return 0;
}