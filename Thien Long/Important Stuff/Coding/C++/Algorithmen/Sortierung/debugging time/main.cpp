#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <random>
#include <vector>
using namespace std;
// us means microseconds; 1 microsecond = 1/1.000.000 seconds = 0,000001
int Vgl, Vt;

/* ---------------- Counting Sort ---------------- */
void counting_sort(int arr[], int n) {
    Vgl = 0; Vt = 0;

    if (n == 0) return;

    // 1. Maximalwert finden
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        Vgl++; // Vergleich
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // 2. Zähl-Array erstellen
    vector<int> count(maxVal + 1, 0);

    // 3. Zahlen zählen
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // 4. Array zurückschreiben (sortiert)
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            Vt++; // Schreiben = Vertauschung
            count[i]--;
        }
    }
}

/* ---------------- Insertion Sort ---------------- */
void insertion_sort(int n, int a[]) {
    Vgl = 0; Vt = 0;
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0) {
            Vgl++; // Vergleich
            if (a[j] > key) {
                a[j + 1] = a[j];
                Vt++; // Vertauschung
                j--;
            } else break;
        }
        a[j + 1] = key;
        Vt++;
    }
}

/* ---------------- Merge Sort ---------------- */
void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = a[l + i];
    for (int j = 0; j < n2; j++) R[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        Vgl++;
        if (L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
        Vt++;
    }
    while (i < n1) { a[k++] = L[i++]; Vt++; }
    while (j < n2) { a[k++] = R[j++]; Vt++; }
}

void merge_sort(int a[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(a, l, m);
        merge_sort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

/* ---------------- Quick Sort ---------------- */
int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        Vgl++;
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
            Vt++;
        }
    }
    swap(a[i + 1], a[high]);
    Vt++;
    return i + 1;
}

void quick_sort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        quick_sort(a, low, pi - 1);
        quick_sort(a, pi + 1, high);
    }
}

/* ---------------- Main ---------------- */
int main() {
    std::mt19937 rng(static_cast<unsigned int>(std::chrono::system_clock::now().time_since_epoch().count()));
    std::uniform_int_distribution<int> dist(1, 100);

    const int size = 99999;
    int original[size];

    for (int i = 0; i < size; i++)
        original[i] = dist(rng);

    int a1[size], a2[size], a3[size], a4[size];
    copy(original, original + size, a1);
    copy(original, original + size, a2);
    copy(original, original + size, a3);
    copy(original, original + size, a4);

    using namespace std::chrono;
    auto start = high_resolution_clock::now();
    insertion_sort(size, a1);
    auto end = high_resolution_clock::now();
    cout << "Insertion Sort time: " << duration_cast<microseconds>(end - start).count()
         << " us, Vgl=" << Vgl << ", Vt=" << Vt << "\n";

    start = high_resolution_clock::now();
    merge_sort(a2, 0, size - 1);
    end = high_resolution_clock::now();
    cout << "Merge Sort time: " << duration_cast<microseconds>(end - start).count()
         << " us, Vgl=" << Vgl << ", Vt=" << Vt << "\n";

    Vgl = 0; Vt = 0;
    start = high_resolution_clock::now();
    quick_sort(a3, 0, size - 1);
    end = high_resolution_clock::now();
    cout << "Quick Sort time: " << duration_cast<microseconds>(end - start).count()
         << " us, Vgl=" << Vgl << ", Vt=" << Vt << "\n";

    start = high_resolution_clock::now();
    counting_sort(a4, size);
    end = high_resolution_clock::now();
    cout << "Counting Sort time: " << duration_cast<microseconds>(end - start).count()
         << " us, Vgl=" << Vgl << ", Vt=" << Vt << "\n";

    return 0;
}
