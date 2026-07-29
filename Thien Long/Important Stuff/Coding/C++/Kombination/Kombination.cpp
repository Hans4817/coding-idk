#include <iostream>
#include <algorithm>
using namespace std;

bool next_Kombination(int arr[], int n, int k) {
    int i = k - 1;
    while (i >= 0 && arr[i] == n - k + i + 1) {
        i--;
    }
    if (i < 0) {
        return false;
    }
    arr[i]++;                                                                  
    for (int j = i + 1; j < k; j++) {
        arr[j] = arr[i] + j - i;
    }
    return true;
}

void Kombination(int arr[], int k, int n) {
    sort(arr, arr + n);
    cout << "Kombinationen von " << k << " Elementen aus " << n << " Zahlen:\n";
    int combinationCount = 0;
    do {
        for(int i = 0; i < k; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        combinationCount++;
    } while (next_Kombination(arr, n, k));

    cout << "\nAnzahl der Kombinationen: " << combinationCount;
}

int main(int argc, char const *argv[]) {
    while (true) {
        int n, k;
        cout << "Geben Sie n ein: "; 
        cin >> n;
        cout << "\nGeben Sie k ein: "; 
        cin >> k;
        int numbers[n];
        for(int i = 0; i < n; i++) {
            cout << "Geben Sie die " << i+1 << ". Zahl ein: ";
            cin >> numbers[i];
        }

        Kombination(numbers, k, n);

        string MoechtenSieNochmal;
        cout << "\nMoechten Sie das Programm nochmal benutzen? (j/n) ";
        cin >> MoechtenSieNochmal;
        if(MoechtenSieNochmal == "n" || MoechtenSieNochmal == "N") {
            cout << "\nTschüss!";
            return 0;
        }
    }
    return 1;
}