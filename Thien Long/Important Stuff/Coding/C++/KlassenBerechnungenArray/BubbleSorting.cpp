#include <iostream>
using namespace std;

int main() {
	int ohio, abfrage,temp;
	cout << "Wie viele zahlen möchten sie haben? ";
	cin >> abfrage;
	ohio = abfrage;
	int arr[ohio];
    
	for(int i = 0; i < abfrage; i++) {
		cin >> arr[i];
	};

	for(int i = 0; i < abfrage - 1; i++) {
		for(int j = 0; j < abfrage - i - 1; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout << endl;
	for(int h = 0; h < abfrage; h++) {
		cout << arr[h] << "  ";
	}
	return 0;


}
