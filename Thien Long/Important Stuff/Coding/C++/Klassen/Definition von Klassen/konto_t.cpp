#include "konto.h"

int main(int argc, char const *argv[])
{
	Konto giro1, giro2;
	giro1.init("Munster, Gabi", 3512345, 99.40);
	giro1.display();

	//girol.stand += 100;
	giro2 = giro1;

	giro2.init("Liebig, Ernst", 3512345, 199,40);

	giro2.display();

	Konto& munter = giro1;

	munter.display();

	return 0;
}