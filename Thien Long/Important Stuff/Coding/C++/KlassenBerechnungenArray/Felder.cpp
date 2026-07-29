#include <iostream>
using namespace std;

int main() {
	int zahlen[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i = 0; i < 10; i++) {
		zahlen[i] = zahlen [i] * 2;
		cout << zahlen[i] << ",";
	}
	cout << endl;
}