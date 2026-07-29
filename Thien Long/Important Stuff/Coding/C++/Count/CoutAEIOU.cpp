#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char str[500000];
    int count = 0, i;
    cout << "Geben Sie einen Text ein: ";
    gets(str);
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'<) {
            count++;    
        }
    }
    cout << "Nummern von Vokalen treten auf: " << count;
    return 0;
}