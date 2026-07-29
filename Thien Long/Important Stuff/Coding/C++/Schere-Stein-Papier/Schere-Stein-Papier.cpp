#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
	while (true) {
	    srand((unsigned)time(0)); 
	    int i;
	    i = (rand()%3)+1;

	    int RockPaperScissors;
	    cout << "Schere-Stein-Papier\nGeben Sie 1 fuer Schere, 2 fuer Stein und 3 fuer Papier: ";
	    cin >> RockPaperScissors;
	    string abfrage;
	    switch(RockPaperScissors) {
	    case 1:
	    	if(i == 1) {
	    		cout << "\nGleichstand!\nMoechten Sie nochmal probieren(J,N)?"; cin >> abfrage;
	    	} 
	        else if(i == 2) {
	    		cout << "\nVerloren. Dein System wird in 30 sekunden gelöscht.\nMoechten Sie nochmal probieren(J,N)?"; cin >> abfrage;
	    	} 
	    	else {
	    		cout << "\nGewonnen!\nMoechten Sie nochmal spielen (J,N)?"; cin >> abfrage;
	    	}

	    	break;
	    case 2:
	    	if(i == 1) {
	    		cout << "\nGewonnen!\nMoechten Sie nochmal spielen(J,N)?"; cin >> abfrage;
	    	} 
	        else if(i == 2) {
	        	cout << "\nGleichstand!\nMoechten Sie nochmal probieren(J,N)?"; cin >> abfrage;
	    	} 
	    	else {
	    		cout << "\nVerloren. Dein System wird in 30 sekunden gelöscht.\nMoechten Sie nochmal probieren(J,N)?"; cin >> abfrage;
	    	}

	    	break;
	    case 3:
	    	if(i == 1) {
	    		cout << "\nGewonnen!\nMoechten Sie nochmal spielen(J,N)?"; cin >> abfrage;

	    	} 
	        else if(i == 2) {
	        	cout << "\nVerloren. Dein System wird in 30 sekunden gelöscht.\nMoechten Sie nochmal probieren(J,N)?"; cin >> abfrage;
	    	} 
	    	else {
	    		cout << "\nGleichstand!\nMoechten Sie nochmal probieren(J,N)?"; cin >> abfrage;
	    	}
	    	break;
	    default:
	    	cout << "Falsche eingabe.";
	    	return 1;
	    }

	    if(abfrage == "J" || abfrage == "j") {
	    	continue;
	    }
	    else {
	    	return 0;
	    }
	}
	return 1;
}