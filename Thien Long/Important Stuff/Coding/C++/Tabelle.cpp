#include <iostream>
using namespace std;

int main(){
	for(int i = 1; i <= 8; i++) {
		cout << "\n";
		for(int j = 1; j <= 100000000; j++) {
			cout << "\t "<< i + j;
			

		}
	}
}