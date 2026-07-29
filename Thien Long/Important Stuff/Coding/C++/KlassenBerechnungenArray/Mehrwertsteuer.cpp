#include <iostream>
using namespace std;

int main() {
	float Steuer, Kosten;
	const float Mehrwertsteuer = 19;

	cout << "Geben sie die Kosten ein.";
	cin >> Kosten;


    Steuer = Kosten * Mehrwertsteuer /  100;

    cout << "\nKosten: " << Kosten;
    cout << "\nSteuer: " << Steuer;
    return 0; //return

}