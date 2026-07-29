#include <iostream>
using namespace std;

class algorithmus {
public:
	int abfrageAnzahl;
	int abfrageBinary;

	int array[100];

void binarySearch() {
    int left = 0;
    int right = abfrageAnzahl - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == abfrageBinary) {
            cout << "Element gefunden an Index: " << mid;
            return;
        }
        if (array[mid] < abfrageBinary) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << "Element nicht gefunden.";  // Wenn das Element nicht gefunden wird
}


} algo;

void BubbleSort(int abfrage, int array[]) {
	int temp;
    
	for(int i = 0; i < abfrage; i++) {
		algo.array[i] = array[i];
	}

	for(int i = 0; i < abfrage - 1; i++) {
		for(int j = 0; j < abfrage - i - 1; j++) {
			if(algo.array[j] > algo.array[j+1]) {
				temp = algo.array[j];
				algo.array[j] = algo.array[j+1];
				algo.array[j+1] = temp;
			}
		}
	}
	for(int h = 0; h < abfrage; h++) {
		cout << algo.array[h] << "  ";
	}
}



int main(int argc, char const *argv[])
{
	//eingabe	
	int abfrage;
	int abfrageBinary;

	cout << "Binaere Suche\nGeben Sie die anzahl der Zahlen, die Sie eingeben moechten: ";
	cin >> abfrage;
	int arr[abfrage];
	if(abfrage < 1) {
		cout << "Falsche eingabe.\n\n";
		return 0;
	}
	for(int i = 0; i < abfrage; i++) {
		cout << endl << i+1 <<  ". eingabe: ";
		cin >> arr[i];
	}
	//Bubble Sort
	cout << "\nSotierte Zahlen: ";
	BubbleSort(abfrage, arr);
	//Binäre Suche
	cout << "\n\nWelcher Zahl moechten Sie suchen?\n(Die sotierte Zahlen)\n\nEingabe:";
	cin >> abfrageBinary;
	algo.abfrageBinary = abfrageBinary;
	algo.abfrageAnzahl = abfrage;
	cout << endl;
	algo.binarySearch();

	return 0;
}
