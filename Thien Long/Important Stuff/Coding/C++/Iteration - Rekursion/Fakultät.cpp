#include <iostream>
using namespace std;

int Faculty(int n) {
	if (n == 1) return 1; // Abbruchbedingung
	return n * Faculty(n-1);
}

int main(int argc, char const *argv[])
{
	cout << Faculty(4);
	/* code */
	return 0;
}