#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	cout << "Geben Sie die Mengen der Sternen ein: "; cin >> n;
	int k = n;
	int j = 1;
	for(int i = 1; i <= n; i++) {
		cout << endl;
		for (int i = 1; i <= k; ++i)
			cout << " ";
			for (int i = 1;  i <= j; i++) {
				cout << "* ";
			}
			k-=1;
			j+=1;
		}	

	return 0;
}