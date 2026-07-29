#include <iostream>

double plus(double x, double y) {
	std::cout << "Ergebnis von " << x << " + " << y << " = ";
	return x + y;
}
double minus(double x, double y) {
	std::cout << "Ergebnis von " << x << " - " << y << " = ";
	return x - y;
}
double mal(double x, double y) {
	std::cout << "Ergebnis von " << x << " * " << y << " = ";
	return x * y;
}
double geteilt(double x, double y) {
	std::cout << "Ergebnis von " << x << " / " << y << " = ";
	return x / y;
}

int main() {
	int Menu , x1=0,y1=0;
	std::cout << "Bitte waehlen Sie Menue von 1 bis 4:\n\nPlus Operation(Input: 1)\nMinus Operation(Input: 2)\nMal Operation(Input: 3)\nGeteilt Operation(Input: 4) ";
	std::cout << std::endl << "------------" << std::endl << "Ihre wahl: ";
	std::cin >> Menu;
	std::cout << "Erste zahl:";
	std::cin >> x1;
	std::cout << "Zweite zahl:";
	std::cin >> y1;

    if(Menu == 1) {

    	std::cout  << plus(x1,y1);
    }
    else if(Menu == 2) {
    	std::cout << minus(x1,y1);
    }
    else if(Menu == 3) {
    	std::cout << mal(x1,y1);
    }
    else if(Menu == 4) {
    	std::cout << geteilt(x1,y1);
    }
    return 0;
}
