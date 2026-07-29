#include <iostream>
#include <time.h>
using namespace std;

void insert_sort(int n, int z[]) {
	int i, j, x, k;

	for(int i = 2; i <= n; i++) {
		x = z[i];
		z[0] = x;
		j = i - 1;
		while(x < z[j]) {
			z[j+1] = z[j];
			j--;
		}
		z[j+1] = x;
		//Ausgabe
		cout << i-1 << ". Durchlauf: ";
		for(int k = 1; k <= 10; k++)  {
			cout << z[k] << "  "; 
		}
		cout << endl;
		}
		
}



int main(int argc, char const *argv[])
{
	int i, k, zahlen[11];
	srand(time(NULL));

	for(int i = 1; i <= 10; i++) {
		zahlen[i] = rand() % 100;
	}	
	cout << "------------vor insert_sort-----------";
	cout << endl;
	for(int k = 1; k <= 10; k++) {
		cout << zahlen[k] << " ";
	}
	cout << endl << endl;
	insert_sort(10, zahlen);
	cout << endl;
	cout << "-----------nach insert_sort-----------";
	cout << endl << endl;
	for(int k = 1; k <= 10; k++) {
		cout << zahlen[k] << " ";
	}


	return 0;
}