#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int X_achse;
	int Y_achse;
	cout << "Geben sie die X-achse ein: "; cin >> X_achse;
	cout << "Geben sie die Y-achse ein: "; cin >> Y_achse;
	cout << endl;
	for(int y = 0; y < Y_achse; y++) {
		cout << "\n* ";
		for(int x = 1; x < X_achse; x++) {
			cout << "* "; 
		}
	}

	return 0;
}