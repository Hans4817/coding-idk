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


	cout << "\n       " << OA[0] << "   " << AB[0] << "   " << AC[0];
	cout << "\nE: x = " << OA[1] << "+r*" << AB[1] << "+s*" << AC[1];
	cout << "\n       " << OA[2] << "   " << AB[2] << "   " << AC[2];

	cout << endl << "Geben Sie r ein: "; cin >> r;
	cout << endl << "Geben Sie s ein: "; cin >> s;

	cout << "\n       " << OA[0] << "   " << r*AB[0] << "   " << s*AC[0];
	cout << "\nE: x = " << OA[1] << "+" << r << "*" << r*AB[1] << "+"<< s << "*" << s*AC[1];
	cout << "\n       " << OA[2] << "   " << r*AB[2] << "   " << s*AC[2];

	cout << endl;
	for(int i = 0; i <= 2; i++) {
		cout << OA[i] + r*AB[i] + s*AC[i] << endl;
	}


	return 0;
}