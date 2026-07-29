#include <iostream>
using namespace std;


class Determinante {
public:
    int Matrix[8][8];
	


    void Matrix2D() {
    	int run_once = 0;
			for(int i = 0; i < 2; i++) {
				for(int k = 0; k < 2; k++) {
					cout << Matrix[k][i] << "  ";
				}
				cout << endl;
				if(run_once == 0){
					cout <<"      = "  << (Matrix[0][0] * Matrix[1][1]) - (Matrix[0][1] * Matrix[1][0]) << endl;
					run_once = run_once + 1;		
				}
	
    		}
    	}
	

    void Matrix3D() {
    	int run_once = 0;

			for(int i = 0; i < 3; i++) {
				for(int k = 0; k < 3; k++) {
					cout << Matrix[k][i] << "  ";
				}

				if(run_once == 1){
					cout <<"   = "  << (Matrix[0][0] * Matrix[1][1] * Matrix[2][2]    + Matrix[1][0] * Matrix[2][1] * Matrix[0][2] + Matrix[2][0] * Matrix[0][1] * Matrix[1][2]) - (Matrix[0][2] * Matrix[1][1] * Matrix[2][0] +          Matrix[1][2] * Matrix[2][1] * Matrix[0][0] + Matrix[2][2] * Matrix[0][1] * Matrix[1][0]);
					run_once = run_once + 1;		
				}
				else {
					run_once+=1;
				}
				cout << endl;
	
    		}
    	
	}

}Matrix;



void Eingabe(string h) {
	if(h != "2D" && h !="3D") {
		cout << "Falsche eingabe!";
		return;
	}
	if(h == "2D") {
			for(int i = 0; i < 2; i++) {
            	for(int j = 0; j < 2; j++) {
                	cout << "Geben Sie das Element (" << i+1 << "," << j+1 << ") der Matrix ein: ";
                	cin >> Matrix.Matrix[i][j];
            }
        } 	
        Matrix.Matrix2D();
	}

	else if(h == "3D") { 
			for(int i = 0; i < 3; i++) {
            	for(int j = 0; j < 3; j++) {
                	cout << "Geben Sie das Element (" << i+1 << "," << j+1 << ") der Matrix ein: ";
                	cin >> Matrix.Matrix[i][j];
            }
            //Matrix A
        }
        //Matrix B
        Matrix.Matrix3D();
	}

}



int main() {
	string Input, Input1;
	cout << "Matrix\n";
	cout << "\nGeben sie die Dimension der Matrix ein: ";
	cout << "\n\tAuswahl: ""2D"" und ""3D""""";
	cout << "\nEingabe: ";
	cin >> Input;

	Eingabe(Input);


	return 0;
}
