#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    cout << "Geben Sie die Menge der Sternen fuer ein Pararellogramm: ";
    cin >> n;
    vector<string> array(n);


    for (int i = 0; i < n; i++) {
        array[i] = "*";
    }

    int k = n;
    for(int i = 1; i <= n; i++) {
    	cout << endl;
    	for(int i = 1; i <= k; i++) 
    		cout << " ";
    		for (int i = 0; i < n; i++) {
       	 		cout << array[i] << " ";
    		}
    	k-=1;
    }



    return 0;
}