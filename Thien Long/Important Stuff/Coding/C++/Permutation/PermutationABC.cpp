#include <iostream>
#include <algorithm>
using namespace std;

void Permutation(string arr[], int Ziffern) {
    sort(arr, arr + Ziffern);
    cout << Ziffern << "! moeglische permutationen mit " << Ziffern << " elementen:\n";
    do {
        for(int i = 0; i < Ziffern; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while (next_permutation(arr, arr + Ziffern));
}

int main()
{
    int Ziffern;
    cout << "Wie viele verschiedene Buchstaben moechten Sie haben? ";
    cin >> Ziffern;

    string NummernDerZiffern[Ziffern];
    for(int i = 0; i < Ziffern; i++) {
        cout << "Geben Sie die " << i+1 << ". Buchstabe ein: ";
        cin >> NummernDerZiffern[i];
    }
    Permutation(NummernDerZiffern, Ziffern);

    //Falkultaet
    int Falkultaet = 1;
    for(int i = Ziffern; i > 1; i--) {
        Falkultaet *= i;
    }
    cout << "\nEs gibt " << Falkultaet << " verschiedene Permutation.";
    return 0;
}
