#include <iostream>
using namespace std;

template <class T> T myMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    // Call myMax for int
    cout << myMax(3, 7) << endl;
    // call myMax for double
    cout << myMax(3.99, 7.4) << endl;
    // call myMax for char
    cout << myMax('g', 'e') << endl;

    return 0;
}