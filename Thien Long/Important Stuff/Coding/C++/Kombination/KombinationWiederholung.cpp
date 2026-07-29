#include <iostream>
#include <algorithm>
using namespace std;

bool next_Combination(int arr[], int n, int k) {
    for (int i = k - 1; i >= 0; --i) {
        if (arr[i] < n - 1) {
            arr[i]++;
            for (int j = i + 1; j < k; ++j) {
                arr[j] = arr[i];
            }
            return true;
        }
    }
    return false;
}

void Combination(int arr[], int k, int n) {
    cout << "Kombinationen von " << k << " Elementen aus " << n << " Zahlen mit Wiederholung:\n";
    int combinationCount = 0;
    do {
        for(int i = 0; i < k; i++) {
            cout << arr[i] + 1 << " ";
        }
        cout << endl;
        combinationCount++;
    } while (next_Combination(arr, n, k));

    cout << "\nAnzahl der Kombinationen: " << combinationCount;
}

int main(int argc, char const *argv[]) {
    while (true) {
        int n, k;
        cout << "Geben Sie n ein: ";
        cin >> n;
        cout << "\nGeben Sie k ein: ";
        cin >> k;
        
        int numbers[n] = {0};

        Combination(numbers, k, n);

        string wiederholen;
        cout << "\nMoechten Sie das Programm nochmal benutzen? (j/n) ";
        cin >> wiederholen;
        if (wiederholen == "n" || wiederholen == "N") {
            cout << "\nTschüss!";
            return 0;
        }
    }
    return 1;
}
