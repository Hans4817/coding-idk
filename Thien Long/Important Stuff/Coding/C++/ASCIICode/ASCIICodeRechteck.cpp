#include <iostream>
using namespace std;

void a() {
	for(int i = 0; i <= 10; i++) {
		cout << char(254);
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	a();
	for(int i = 1; i <= 5; i++) {
		cout << char(254) << "         " << char(254) << endl;
	}
	a();
	return 0;
}


