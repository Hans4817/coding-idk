#include <iostream>
using namespace std;

int main() {
    int n,k;
	cout << "Geben sie n ein: "; cin >> n;
	cout << "\nGeben sie k ein: "; cin >> k;

	if(n<k) {
		cout << "\nn darf nicht kleiner als k sein.";
		return 0;
	}
    
    
    long double nBehaelter = 1;
    for(long i = 1; i <= n; i++) {
        nBehaelter *= i;
    }

    long double kBehaelter = 1;
    for(long i = 1; i <= k; i++) {
        kBehaelter *= i;
    }

    long double nMinus = 1;
    for(long i = 1; i <= n-k; i++) {
        nMinus *= i;
    }

    int binomialkoeffizient = nBehaelter / (kBehaelter * nMinus);
    cout << binomialkoeffizient;


	return 0;
}