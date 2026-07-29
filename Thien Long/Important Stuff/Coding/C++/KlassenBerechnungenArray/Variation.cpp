#include <iostream>
using namespace std;

//n! / (n-k)!

int main()
{
	int n = 0, k = 0;

	cout << "Geben sie n ein: "; cin >> n;
	cout << "\nGeben sie k ein: "; cin >> k;



	long double nBehaelter = 1;
	for(int i = 1; i <= n; i++) {
		nBehaelter *= i;
	}
	long double nANDkBehaelter = 1;
	for(int i = 1; i <= n-k; i++) {
		nANDkBehaelter *= i;
	}

	int Ergebnis = nBehaelter / nANDkBehaelter;
	cout << Ergebnis;

	return 0;
}