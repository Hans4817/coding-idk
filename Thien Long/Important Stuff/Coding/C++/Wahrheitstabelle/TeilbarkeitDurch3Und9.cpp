#include <iostream>
using namespace std;

int quersumme(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
	int sum;
	while(true) {

		

		
		cout << "Geben Sie eine ganze Zahl ein: "; cin >> sum;

		int a = quersumme(sum);
		cout << "Quersumme: " << a;

		if((a % 3 == 0) && (a  % 9 == 0)) {
			cout << "\nDie Zahl " << a << " ist durch 3 und 9 teilbar.";
		}
		else if((a  % 3 == 0) && !(a  % 9 == 0)) {
		cout << "\nDie Zahl " << a << " ist durch 3 teilbar.";
		}
		else if(!(a  % 3 == 0) && (a  % 9 == 0)) {
			cout << "\nDie Zahl " << a << " ist durch 9 teilbar.";
		}
		else {
			cout << "\nDie Zahl " << a << " ist nicht durch 3 und 9 teilbar.";
		}
		string yesorno;
		cout << "\nMoechten Sie noch eine Zahl pruefen? [j,n]";	
		cin >> yesorno;
		if(yesorno == "n" || yesorno == "N") {
			cout << "\nBye Bye!";
			return 0;
		}
}

	return 0;
}