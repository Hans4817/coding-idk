#ifndef _KONTO_
#define _KONTO_
#include <iostream>
#include <string>
using namespace std;

class Konto {
private:
	string name;
	unsigned long nr;
	double stand;

public:
	bool init(const string&, unsigned long, double);
	void display();
};
#endif