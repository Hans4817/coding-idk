#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[500000];
    int count = 0, i;
    cout << "Geben Sie einen Text ein: ";
    gets(str);
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << "Nummern von wörtern treten auf: " << count + 1;
    return 0;
}