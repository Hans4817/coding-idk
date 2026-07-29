#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

	int num;
	cout << "num\n Geben Sie eine Quersumme ein: "; cin >> num;

    if (num < 0) num = -num;

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
	cout << sum;
	return 0;
}