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


bool PrimZahl(int sum) {
    if(sum <= 1) return false;
    for (int i = 2; i * i <= sum; ++i) {
        if (sum % i == 0) {
            return false;
         }
    }
    return true;
}


int primfaktorzerlegung(int num) {
    for (int i = 2; num > 1; i++) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }
    return -1;
}

int primfaktorzerlegung2(int num) {
    for (int i = 2; num > 1; i++) {
        while (num % i == 0) {
            num /= i;
        }
    }
}

int main(int argc, char const *argv[])
{
	while (true) {
		int sum;

		cout << "Bitte geben Sie eine natuerliche Zahl ein, die groesser als 0 ist: "; cin >> sum;
		if(sum < 0) {
			cout << "\ninvailed input";
			return 0;
		}
		int a = quersumme(sum);
		cout << "Quersumme: " << a;
		cout << endl;
		if((sum % 2 == 0) && (sum % 3 == 0) && (sum % 4 == 0) && (sum % 5 == 0) && (sum % 9 == 0)) {
			cout << "\nDie Zahl " << sum << " ist durch 2,3,4,5 und 9 teilbar.";
		}
		if(sum % 2 == 0) {
			cout << "\nDie Zahl " << sum << " ist durch 2 teilbat.";
		}
		 if(sum % 3 == 0) {
			cout << "\nDie Zahl " << sum << " ist durch 3 teilbat.";
		}
		 if(sum % 4 == 0) {
			cout << "\nDie Zahl " << sum << " ist durch 4 teilbat.";
		}
		 if(sum % 5 == 0) {
			cout << "\nDie Zahl " << sum << " ist durch 5 teilbat.";
		}
		 if(sum % 9 == 0) {
			cout << "\nDie Zahl " << sum << " ist durch 9 teilbat.";
		}
		if(!(sum % 2 == 0) && !(sum % 3 == 0) && !(sum % 4 == 0) && !(sum % 5 == 0) && !(sum % 9 == 0)) {
			cout << "\nDie Zahl " << sum << " ist nicht durch 2,3,4,5 und 9 teilbat.";
		}


        int prim = PrimZahl(sum);
        if(prim) {
            cout << "\nDie Zahl " << sum << " ist eine Primzahl.";
        }
        else {
        	cout << "\nDie Zahl " << sum << " ist keine Primzahl.";
        }

		if(sum % 2 == 0) {
			cout << "\nDie Zahl " << sum << " ist gerade.";
		}
		else {
			cout << "\nDie Zahl " << sum << " ist ungerade.";
		}
		

		int i = primfaktorzerlegung2(sum);
			if(i != -1) {
				cout << "\nDie Primzahlfaktoren von " << sum << " ist: ";
				primfaktorzerlegung(sum);
			}
		else {
			cout << "\nDie Zahl " << sum << " kann man nicht in Primzahlen zerlegen.";
		}


		cout << endl;
		string yesorno; 	
		cout << "\n\nMoechten Sie noch eine Zahl pruefen? [j,n]";	
		cin >> yesorno;
		if(yesorno == "n" || yesorno == "N") {
			cout << "\nBye Bye!";
			return 0;
		}

	}
	return 0;
}