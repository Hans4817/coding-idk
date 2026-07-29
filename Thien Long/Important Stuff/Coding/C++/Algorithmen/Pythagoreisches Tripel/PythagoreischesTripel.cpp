#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Pythagoreisches Tripel\n";
    cout << "\nGeben Sie a ein (in natuerlichen Zahlen): "; cin >> a;
    cout << "\nGeben Sie b ein (in natuerlichen Zahlen): "; cin >> b;
    cout << "\nGeben Sie c ein (in natuerlichen Zahlen): "; cin >> c;
    cout << endl;

    if((a*a + b*b) == c*c) {
        cout << a << "^2 + " << b << "^2 = " << c << "^2\n";
        cout << a << ", " << b << " und " << c << " bilden ein Pythagoreisches Tripel,\nda: " << a * a << " + " << b * b << " = " << c * c << endl;
    }
    else {
        cout << a << "^2 + " << b << "^2 = " << a*a + b*b << " != " << c << "^2\n";
        cout << a << ", " << b << " und " << c << " bilden kein Pythagoreisches Tripel,\nda: " << a * a << " + " << b * b << " != " << c * c << endl;
    }

	string Abfrage;
	cout << "\nMoechten Sie nochmal? (J,N) ";
	cin >> Abfrage;
	while(true) {
		 if(Abfrage == "J" || Abfrage == "j") {
		 	cout << "Alles klar.\n\n";
		 	cout << main();
		 }
		 else {
		 	cout << "Bye Bye";
		 	return 0;
		 }
	}

    return 0;
}
