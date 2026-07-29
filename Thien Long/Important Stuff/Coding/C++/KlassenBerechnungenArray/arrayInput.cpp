#include <iostream>
using namespace std;

int main()
{
	double werte[5];
	double erg = 0;

	for(int loop = 0;loop < 5; ++loop) {
        cout << "Geben sie einen Wert ein.";
        cin >> werte[loop];
        erg += werte[loop];
	}


    cout << erg/5;
    return 0;
}