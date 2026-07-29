#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Dezimal      Char" << endl;
	for(int i = 0; i <= 256; i++) {
		cout << i << "            " << char(i) << endl;
	}
	return 0;
}