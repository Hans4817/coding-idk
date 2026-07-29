#include <iostream>
using namespace std;

class Animal {
public:
	bool Alive;

		void eat() {
			cout << "This Animal is eating.\n";
		}
};

class Dog : public Animal {
public:
	Alive = true;
	void Bark() {
		cout << "The dog is barking.\n";
	}
};

class Cat: public Animal {

};

int main(int argc, char const * argv[])
{
	Dog dog; //Objekt erstellen
	cout << dog.Alive << '\n';
	dog.Bark();
	dog.eat();


	return 0;
}