 #include <iostream>
#include <string>
using namespace std;

string Binary(int a) {
    string result = "";
    if (a == 0) return "0";
    while (a > 0) {
        result = char((a % 2) + '0') + result;
        a /= 2;
    }
    return result;
}

string Hexar(int a) {
    string result = "";
    if (a == 0) return "0";
    while (a > 0) {
        int rest = a % 16;
        if (rest < 10)
            result = char(rest + '0') + result;
        else
            result = char(rest - 10 + 'A') + result;
        a /= 16;
    }
    return result;
}

string Octal(int a) {
    string result = "";
    if (a == 0) return "0";
    while (a > 0) {
        result = char((a % 8) + '0') + result;
        a /= 8;
    }
    return result;
}

int BinaryToDecimal(int a) {
    int dezimal = 0, basis = 1;
    while (a > 0) {
        int letzteZiffer = a % 10;
        dezimal += letzteZiffer * basis;
        basis *= 2;
        a /= 10;
    }
    return dezimal;
}

int HexarToDecimal(string a) {
    int dezimal = 0, basis = 1;
    for (int i = a.length() - 1; i >= 0; i--) {
        char zeichen = a[i];
        int wert;
        if (zeichen >= '0' && zeichen <= '9') {
            wert = zeichen - '0';
        } else if (zeichen >= 'A' && zeichen <= 'F') {
            wert = zeichen - 'A' + 10;
        } else if (zeichen >= 'a' && zeichen <= 'f') {
            wert = zeichen - 'a' + 10;
        } else {
            cout << "Ungueltiges Zeichen: " << zeichen << endl;
            return -1;
        }
        dezimal += wert * basis;
        basis *= 16;
    }
    return dezimal;
}

int OctalToDecimal(int a) {
    int dezimal = 0, basis = 1;
    while (a > 0) {
        int letzteZiffer = a % 10;
        dezimal += letzteZiffer * basis;
        basis *= 8;
        a /= 10;
    }
    return dezimal;
}

string BinaryToHexar(int a) {
    int dezimal = BinaryToDecimal(a);
    return Hexar(dezimal);
}

string HexarToOctal(string a) {
    int dezimal = HexarToDecimal(a);
    return Octal(dezimal);
}

string BinaryToOctal(int a) {
    int dezimal = BinaryToDecimal(a);
    return Octal(dezimal);
}

int main() {
    cout << "1. Binaer -> Dezimal\n";
    cout << "2. Hexar -> Dezimal\n";
    cout << "3. Octal -> Dezimal\n";
    cout << "4. Binaer -> Hexar\n";
    cout << "5. Hexar -> Octal\n";
    cout << "6. Binaer -> Octal\n";
   
    char i;
    cin >> i;
   
    switch (i) {
        case '1': {
            cout << "Geben Sie eine Binaerzahl ein (nur Ziffern 0 und 1): ";
            int a;
            cin >> a;
            cout << "Die Dezimalzahl ist: " << BinaryToDecimal(a) << endl;
            break;
        }
        case '2': {
            cout << "Geben Sie eine Hexarzahl ein (z.B. 1A, 2F): ";
            string b;
            cin >> b;
            cout << "Die Dezimalzahl ist: " << HexarToDecimal(b) << endl;
            break;
        }
        case '3': {
            cout << "Geben Sie eine Octalzahl ein (nur Ziffern 0-7): ";
            int c;
            cin >> c;
            cout << "Die Dezimalzahl ist: " << OctalToDecimal(c) << endl;
            break;
        }
        case '4': {
            cout << "Geben Sie eine Binaerzahl ein: ";
            int a;
            cin >> a;
            cout << "Die Hexarzahl ist: " << BinaryToHexar(a) << endl;
            break;
        }
        case '5': {
            cout << "Geben Sie eine Hexarzahl ein: ";
            string b;
            cin >> b;
            cout << "Die Octalzahl ist: " << HexarToOctal(b) << endl;
            break;
        }
        case '6': {
            cout << "Geben Sie eine Binaerzahl ein: ";
            int a;
            cin >> a;
            cout << "Die Octalzahl ist: " << BinaryToOctal(a) << endl;
            break;
        }
        default:
            cout << "Ungueltige Eingabe!" << endl;
            break;
    }
   
    return 0;
}