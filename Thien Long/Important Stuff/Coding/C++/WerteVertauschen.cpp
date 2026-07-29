#include <iostream>
using namespace std;

int main() {
	int temp = 5;
	int Wert = 6;
	int h;

    h = Wert;
    Wert = temp;
    temp = h;

    cout << temp << Wert;

}