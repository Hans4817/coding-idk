#include <iostream>
using namespace std;

int main()
{
     int Reihen = 5; //Variable
     int Limit = 2; //Variable
     
     int brett[Reihen][Limit] = {
       {1,2}, //Wert
       {3,4}, //Wert
       {5,6}, //Wert
       {7,8}, //Wert
       {9,10} //Wert
     };
     
     for(int i = 0; i < Reihen; i++) { //schleife y achse
        for(int j = 0; j < Limit; j++) { //schleife x achse
            cout << brett[i][j] << "   "; //output
        }
        cout << endl; //output
    }
    return 0;

    //2D array und ausgabe (5 reihen)
}