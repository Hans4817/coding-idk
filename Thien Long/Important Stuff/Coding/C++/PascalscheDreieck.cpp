#include <iostream>
using namespace std;
 

long double Binominalkoeffizient(int n, int k);

void printPascal(int n) {
    for (int line = 0; line < n+1; line++) {
    	cout << "n=" << line;
    	cout << "\t";
        for (int i = 0; i <= line; i++) {
            cout << Binominalkoeffizient(line, i) << " ";
        }
        cout << endl;
    }
}


long double Binominalkoeffizient(int n, int k) {

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
    long double ergebnis = nBehaelter / (kBehaelter * nMinus);
    return ergebnis;

}
int main() {
	cout << "Pascalsche Dreieck\n";
	int input;
	cout << "Bitte geben Sie die Anzahl der Zeilen des Pascalschen Dreiecks ein: ";
	cin >> input;
    printPascal(input);
    return 0;
}