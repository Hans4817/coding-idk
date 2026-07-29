#include <iostream>
using namespace std;
//not finished

int main()
{
	int input;
	int first, second;
	cout << "Taschenrechner\nGeben Sie ein Operator ein ";
	cout << "1. +\n";
	cout << "2. -\n";
	cout << "3. /\n";
	cout << "4. *\n";

	cout << "input: ";
	cin >> input;

	switch(input) {
	case 1:
		cout << "\n1. Summe: ";
		cin >> first;
		cout << "\n2. Summe: ";
		cin >> second;
		cout << "\n\nAntwort:" << first + second;
	break;
		case 2:
		cout << "\n1. Summe: ";
		cin >> first;
		cout << "\n2. Summe: ";
		cin >> second;
		cout << "\n\nAntwort:" << first + second;
	break;
		case 3:
		cout << "\n1. Summe: ";
		cin >> first;
		cout << "\n2. Summe: ";
		cin >> second;
		cout << "\n\nAntwort:" << first + second;
	break;
		case 4:
		cout << "\n1. Summe: ";
		cin >> first;
		cout << "\n2. Summe: ";
		cin >> second;
		cout << "\n\nAntwort:" << first + second;
	break;
	}

	return 0;
}