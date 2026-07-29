#include <iostream>
using namespace std;

int main() {
	const float PI = 3.14159;
    float Radius, Umfang, Flaecheninhalt;
	cout << "Kreis berechnung von fläscheninhalt und Umfang.\n";
	cout << "Geben sie einen Radius ein.";
	cin >> Radius;
    Umfang = 2 * PI * Radius;
    Flaecheninhalt = PI * Radius * Radius;
    cout << "Flaecheninhalt: " << Flaecheninhalt;
    cout << "\nUmfang: " << Umfang;
}