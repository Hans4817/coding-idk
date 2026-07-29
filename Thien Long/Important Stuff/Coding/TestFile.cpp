#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {1,4,2,4,7,2,6};
	int length = 7;

	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length - 1; j++) {
			if(a[j] > a[j+1]) {
				int temp = a[j + 1];
				a[j+1] = a[j];
				a[j] = temp; 
			}
		}
	}
	for(int i = 0; i < length; i++) {
		cout << a[i] << " ";
	}



	return 0;
}