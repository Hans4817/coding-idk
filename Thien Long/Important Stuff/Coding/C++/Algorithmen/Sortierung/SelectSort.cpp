#include <iostream>
#include <random>
#include <time.h>  
using namespace std;

void select_sort(int n, int z[]) {
    for (int i = 0; i < n - 1; i++) {
        int x = z[i];
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (z[j] < x) {
                k = j;
                x = z[j];
            }
        }
        z[k] = z[i];
        z[i] = x;
        cout << "Durschlauf " << i+1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << z[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand (time(NULL));
    const int size = 10;
    int arr[size];
    for(int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "-----------------vor select_sort------------------\n\nUnsorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    select_sort(size, arr);

    cout << "\n\n-----------------nach select_sort-----------------\n\nSorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
