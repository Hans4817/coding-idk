#include <iostream>
using namespace std;

int main()
{
	double werte[5];



	for(int loop = 0;loop < 5; ++loop) {
        cout << "Geben sie einen Wert ein.";
        cin >> werte[loop];

	}
    for(int loop = 4; loop >= 0; --loop) {
    	cout << "Ausgabe: " << werte[loop] << endl;
    }

    
    return 0;
}