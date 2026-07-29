#include <iostream>
using namespace std;

int main() {
	int Jahr = 0;
	cout << "Geben sie einen Jahr ein: ";
	cin >> Jahr;
	if(Jahr % 4 == 0) {
		cout << Jahr << " ist ein Schaltjahr.";
	}
	else {
		cout << Jahr << " ist kein Schaltjahr.";
	}
	return 0;
}