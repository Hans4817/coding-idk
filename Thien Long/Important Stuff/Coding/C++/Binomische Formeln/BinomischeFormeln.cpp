#include <iostream>
#include <vector>

using namespace std;
 
int Binominalkoeffizient(int n, int k) {

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
    int ergebnis = nBehaelter / (kBehaelter * nMinus);
    return ergebnis;

}

int getLengthOfPascalscheDreieck(int n) {
	int a = 0;
    for (int i = 0; i <= n; i++) {
        a++;
    }
    return a;
}

int main() {
	cout << "Binomische Formeln\n";
	int Exponent;
    cout << "Geben Sie einen Exponent ein: ";
	cin >> Exponent;



	int sizeOfBinominal = getLengthOfPascalscheDreieck(Exponent);
	vector<int> result(sizeOfBinominal);
	for(int i = 0; i <= Exponent; i++) {
        result[i] = Binominalkoeffizient(Exponent, i);
    }

    for (int i = 0; i < sizeOfBinominal; i++) {
        if (result[i] == 1) {
            if (sizeOfBinominal - i == 1) {
                cout << "b^" << Exponent;
                break;
            }
            cout << "a^" << Exponent;
        }
        else {
            cout << result[i] << "a^" << Exponent - i << "b^" << i;
        }
        cout << " + ";
    }
    return 0;
}