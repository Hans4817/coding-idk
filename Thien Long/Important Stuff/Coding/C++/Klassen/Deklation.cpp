#include <iostream>
using namespace std;

class Char {
public:
	char character[100];

	void readCharCharacterLength() {
	        cout << "Geben Sie einen Text ein: ";
	        cin.getline(character, 100);

	        int length = 0;
	        while(character[length] != '\0') {
	            length++;
	        }

	        cout << "\"" << character << "\" hat " << length << " Zeichen." << endl;
	}
};

int main(int argc, char const *argv[]) {
    Char myChar;
    myChar.readCharCharacterLength();

	return 0;
}