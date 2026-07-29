#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int A[3], B[3], C[3];

	for(int i = 0; i <= 2; i++) {
		cout << "Geben Sie die " << i+1 << ". Zahl fuer A ein: "; cin >> A[i];
	}
	cout << endl;
	for(int i = 0; i <= 2; i++) {
		cout << "Geben Sie die " << i+1 << ". Zahl fuer B ein: "; cin >> B[i];
	}
	cout << endl;
	for(int i = 0; i <= 2; i++) {
		cout << "Geben Sie die " << i+1 << ". Zahl fuer C ein: "; cin >> C[i];
	}
	int OA[3] ,AB[3] , AC[3], r , s;


	for(int i = 0; i <= 2; i++) {
		OA[i] = A[i];
		AB[i] = B[i] - A[i];
		AC[i] = C[i] - A[i];

	}
    int a1 = (AB[1] * AC[2] - AB[2] * AC[1]);
    int a2 = (AB[2] * AC[0] - AB[0] * AC[2]);
    int a3 = (AB[0] * AC[1] - AB[1] * AC[0]);

	cout << "\n   (  (" << OA[0] << ")) * (" << a1 << ")";
	cout << "\nE: (x-(" << OA[1] << ")) * (" << a2 << ") = 0";
	cout << "\n   (  (" << OA[2] << ")) * (" << a3 << ")";

	return 0;
}