#include <iostream>
using namespace std;
int main() {
	cout << "integer: " << sizeof(int)*8 << endl; //integer Datentyp (bit)
	cout << "unsigned integer: " << sizeof(unsigned int)*8 << endl; //unsigned integer Datentyp (bit)
	cout << "char: " << sizeof(char)*8 << endl; //char Datentyp (bit)
	cout << "long: " << sizeof(long)*8 << endl; //long Datentyp (bit)
	cout << "bool: " << sizeof(bool)*8 << endl; //bool Datentyp (bit)
	cout << "float: " << sizeof(float)*8 << endl; //float Datentyp (bit)
	cout << "double: " << sizeof(double)*8 << endl; //double Datentyp (bit)
	cout << "long double: " << sizeof(long double)*8 << endl; //long double Datentyp (bit)
	cout << "long long: " << sizeof(long long)*8 << endl; //long long Datentyp (bit)
    
    return 0;
}