#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int disks, char src, char dest, char temp)
{
    if (disks > 0) {
        hanoi(disks - 1, src, temp, dest);
        printf("move disc from %c to %c\n", src, dest);
        hanoi(disks - 1, temp, dest, src);
    }
}

int main()
{
    int input;

    cout << "Gib die anzahl der Scheiben ein: ";
    cin >> input;
    cout << "Wir werden fuer sie die moeglichkeiten berechnen und die Schritten. ";
    cout << "\nBinominalkoeffizientMoeglichkeiten: " << pow(2,input)-1;
    cout << endl << endl;
    hanoi(input, 'A', 'C', 'B');
}

