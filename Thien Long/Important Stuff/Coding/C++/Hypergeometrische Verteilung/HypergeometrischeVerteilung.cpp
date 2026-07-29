#include <iostream>
using namespace std;

// Fakultät berechnen
long double fakultaet(int n) {
    long double result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Binomialkoeffizient n über k berechnen
long double kombination(int n, int k) {
    if (k > n) return 0;
    return fakultaet(n) / (fakultaet(k) * fakultaet(n - k));
}

// Hypergeometrische Wahrscheinlichkeit berechnen
// N = Gesamtzahl der Objekte
// K = Anzahl der Erfolge in der Population
// n = Anzahl der gezogenen Objekte
// k = Anzahl der beobachteten Erfolge
long double hypergeometrisch(int N, int K, int n, int k) {
    long double zaehler = kombination(K, k) * kombination(N - K, n - k);
    long double nenner = kombination(N, n);
    return zaehler / nenner;
}

int main() {
    int N, K, n, k;

    cout << "Gesamtzahl der Objekte (N): ";
    cin >> N;

    cout << "Anzahl der Erfolge in der Population (K): ";
    cin >> K;

    cout << "Anzahl der gezogenen Objekte (n): ";
    cin >> n;

    cout << "Anzahl der beobachteten Erfolge (k): ";
    cin >> k;

    long double p = hypergeometrisch(N, K, n, k);
    cout << "Wahrscheinlichkeit P(X = " << k << ") = " << p << endl;

    return 0;
}