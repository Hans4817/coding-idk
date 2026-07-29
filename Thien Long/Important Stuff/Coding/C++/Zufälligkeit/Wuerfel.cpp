#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void random() {
		int random = rand() % 6+1;
		cout << endl << "Gewuerfelter Zahl: " << random << endl << endl;}

int main(int argc, char const *argv[]) {
	srand(time(0));
	

	cout << "Wuerfel Simulation\n\n";
	while(true) {
		string input;
		cout << "Geben Sie eine beliebige buchstabe ein, um die Simulation zu starten oder zu wiederholen.";
		cout << "\nGeben sie [n] ein, um die Simulation zu beeenden. ";
		cin >> input;
		if(input == "n" || input == "N") {
			cout << "\n\nDanke, dass Sie mein Programm benutzt haben.";
			return 0;
		} else {
			random();
		}

	}

	return 0;
}