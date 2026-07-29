#include <iostream>
using namespace std;



int main(int argc, char const* argv[])
{
	int a, b;
	cin >> a >> b;
	cout << max(a, b);
	return 0;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}