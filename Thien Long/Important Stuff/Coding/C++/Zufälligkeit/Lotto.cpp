#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void random() {
	cout << "Es werden 6 Zahlen generiert.\n";
	int array[49];
	int ki[49] = {0};

	for(int i = 0; i < 49; i++) {
		array[i] = i + 1;
	}
	for(int k = 1; k <= 6; k++) {
		cout << k << ". ";
		for(int i = 1; i <= 15; i++) {
			Sleep(50);

			cout << "-";
		}
		
		while(true) {
			int random = rand() % 49+6;
			if(ki[random] == 0){
				ki[random] = array[random];
				cout << array[random] << endl;
				break;
			}
		}
		
	}
}


int main()
{
	srand(time(0));

	cout << "Willkommen beim Lotto 1 aus 49\n";
	random();
	cout << "Moechten Sie noch einen Wuerfel machen? j/n\n";
string s;
	while(true) {
		cin >> s;
		if(s == "j" || s == "J") {
			random();
			cout << "Moechten Sie noch einen Wuerfel machen? j/n\n";
		}
		else {
			cout << "\nAuf Wiedersehen!";
		}
	}

	return 0;
}
