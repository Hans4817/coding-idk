#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream dat_aus;
    string dateinamen;
    cout << "Geben Sie den Namen der Datei ein: ";
    cin >> dateinamen;
    cout << endl;

    dat_aus.open(dateinamen.c_str(), ios_base::out);

    if(!dat_aus) {
        cout << "Datei konnte nicht geoeffnet werden!";
        cout << endl;
        return -1;
    }
    string benutzerAntwort;
    int gesamtPunkte = 0;

    string Antwort[10] = {"Island" ,"Frankreich" , "China und Russland" , "Japan" , "Russland" , "9" , "Süd-Sudan" , "China" , "Großbritannien" , "Ägypten"};
    string Fragen[10] = {"Welches Land hat die noerdlichste Hauptstadt der Welt?",
                         "Welches Land ist flaechenmaessig das Groesste in Europa?",
                         "Welche beiden Laender haben die meisten Nachbarstaaten?",
                         "In welchem Land liegt die groesste Stadt der Welt (nach Einwohnern)?",
                         "Was ist das flaechenmaessig groesste Land der Erde?",
                         "Wie viele Laender grenzen an Deutschland?",
                         "Was ist das juengste Land der Welt?",
                         "Welche Nation besitzt die meisten Einwohner?",
                         "Welches Land hat den offiziell laengsten Laendernamen?",
                         "Was ist das aelteste Land der Welt?"};

    cout << "10 Fragen und Antworten ueber Laendern." << endl << endl;
    dat_aus << "Fehler oder Richtig?\n\n";

    for(int i = 0; i < 10; i++) {
        cout << Fragen[i] << endl;
        cin >> benutzerAntwort;
        if(benutzerAntwort == Antwort[i]) {
            gesamtPunkte+=1;
        }
        else {
            dat_aus << endl << i+1 << ". Frage haben sie: " << '"' << benutzerAntwort << '"' << " geschrieben.\n";
            dat_aus << "Richtige antwort wäre: " << Antwort[i] << endl;
        }   
    }
dat_aus << endl << gesamtPunkte << " von 10.\n";
if(gesamtPunkte <= 2) {
    dat_aus << "Note 6";
}
else if(gesamtPunkte == 3) {
    dat_aus << "Note 5";
}
else if(gesamtPunkte == 4) {
    dat_aus << "Note 4";
}
else if(gesamtPunkte <= 6) {
    dat_aus << "Note 3";
}
else if(gesamtPunkte == 7) {
    dat_aus << "Note 2";
}
else {
    dat_aus << "Note 1";
}

dat_aus.close();
return 0;
}
