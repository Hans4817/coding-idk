#include <iostream>
using namespace std;

int main() {
	int abfrage, Speicher;

	cout << "Wie viele zahlen möchten sie haben? ";
	cin >> abfrage;
	int arr[abfrage];
	
	for (int i = 0; i < abfrage; i++) {
		cout << i+1 << ". Zahl: ";
        cin >> arr[i];
    }

    Speicher = arr[0];
    for(int k = 0; k < abfrage; k++) {
    	if(arr[k] < Speicher) {
    		Speicher = arr[k];
    	}
    }
	cout << endl << "Kleinste Zahl ist: " << Speicher;


}