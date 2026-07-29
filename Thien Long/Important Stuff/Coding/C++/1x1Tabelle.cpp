#include <iostream>
using namespace std;

int main() {
	int h = 0;
	for(int i = 1; i <= 10; i++) {
		for(int g = 1; g <= 10; g++) {
			h = g * i;
			cout << h;
		}
		cout << endl;
	}
}