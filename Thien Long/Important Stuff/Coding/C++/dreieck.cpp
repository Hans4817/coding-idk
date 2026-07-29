#include <iostream>
using namespace std;

int main()
{
	int dreieck;
	cout << "Geben sie die anzahl des Sternes ein (zeile): "; cin >> dreieck;
	int dreieck1 = dreieck;

	for(int i = 1; i <= dreieck; i++) {
		for(int i = 1; i <= dreieck1; i++) {
			cout << "* ";
		}
		dreieck1 -= 1;
		cout << endl;
	}

	return 0;
}