#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) {
    const float pi = 3.14159265;
    const float e0 = 8.85 * pow(10, -12);
	float Q1, Q2;
    float Meter;

    cout << "Coloumbsches Gesetz\n\nGeben Sie Q1 in Coloumb ein: ";
    cin >> Q1;
    cout << "\nGeben Sie Q2 in Coloumb ein: ";
    cin >> Q2;
    cout << "\nGeben Sie ein, wie weit Q1 und Q2 in Meter sein soll: ";
    cin >> Meter;
    
    float f = ( (1/(4*pi*e0)) * ((Q1 * Q2) / (Meter * Meter)) );
    if(f > 0 ) {
        cout << "\nEs handelt sich um ein abgestossende Ladungen.";
    }
    else {
        cout << "\nEs handelt sich um ein anziehende Ladungen.";
    }
    cout << "\nEs ist " << f << " Newton gross.";
     
	return 0;
}