#include <iostream>
using namespace std;

class Human {
private:
	class Heart {
	public:
		void PumpBlood() { 
			cout << "BumBum\n";
		}
	
};
	class Brain {
	public:
		void Think() {
			cout << "The brain is thinking.\n";
		}
};
public:
	bool Happy;
	//Objekt Erstellen
	Heart heart;
	Brain brain;
};

class Kid: public Human {
public:
    Kid() {
        Happy = true;
    }
};


int main(int argc, char const *argv[]) {
	Kid kid;
	cout << kid.Happy << '\n';
	kid.heart.PumpBlood();
	kid.brain.Think();
	return 0;
}