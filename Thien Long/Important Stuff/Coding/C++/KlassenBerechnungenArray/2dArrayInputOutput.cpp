#include <iostream>
using namespace std;

int main()
{
    int Reihen, Limit, Behaelter1;
    int brett[Reihen][Behaelter1];


    cout << "Geben sie die menge einer Reihe ein: ";
    cin >> Reihen;
    cout << "Geben sie die menge des Limits ein: ";
    cin >> Limit;


    for(int j = 1; j <= Reihen; j++) {
        cout << "Reihe " << j << "." << endl;
          for(int i = 1; i <= Limit; i++) {
             cout << i << ". Zahl: ";
             cin >> Behaelter1;

       }

    }
    for(int k = 0; k <= Reihen; k++) {
        for(int l = 0; l <= Behaelter1; l++) {
            cout << brett[k][l] << " ";
        }
        cout << endl;
    }
}
