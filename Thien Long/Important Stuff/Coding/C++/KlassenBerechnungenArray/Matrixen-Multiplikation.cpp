#include <iostream>
using namespace std;

class CMatrixenMultiplikation
{
public:
	int MatrixA[8][8];
	int MatrixB[8][8];
	int Ergebnis[8][8] = {0};


    void Matrix2D() {
        int run_once = 0;

        for(int i = 0; i < 2; i++) {
            if(run_once == 1) {
            	cout << "    *     =" << endl;
            	run_once+=1;

            }
            else {
            	run_once+=1;
            }

            for(int k = 0; k < 2; k++) {
                cout << MatrixA[k][i] << "  ";
            }





            for(int k = 0; k < 2; k++) {
                cout << MatrixB[k][i] << "  ";
            }



			for(int j = 0; j < 2; j++) {
				for(int k = 0; k < 2; k++) {
					Ergebnis[i][j] += MatrixA[k][i] * MatrixB[j][k];
				}
			}

			for(int j = 0; j < 2; j++) {
				cout << Ergebnis[i][j] << " ";
			}
        


            
        	cout << endl;


        }

	}

    void Matrix3D() {
        int run_once = 0;
        int run_once1 = 0;
        for(int i = 0; i < 3; i++) {
            for(int k = 0; k < 3; k++) {
                cout << MatrixA[k][i] << "  ";
            }


            //+
            if(run_once == 1) {
                cout << "*  ";
                run_once+=1;
            }
            else {
                cout << "   ";
                run_once+=1;
            }
            //+


            for(int k = 0; k < 3; k++) {
                cout << MatrixB[k][i] << "  ";
            }


            //=
            if(run_once1 == 1) {
                cout << " = ";
                run_once1+=1;
            }
            else {
                cout << "   ";
                run_once1+=1;
            }
            //=



			for(int j = 0; j < 3; j++) {
				for(int k = 0; k < 3; k++) {
					Ergebnis[i][j] += MatrixA[i][k] * MatrixB[k][j];
				}
			}

			for(int j = 0; j < 3; j++) {
				cout << Ergebnis[i][j] << " ";
			}
        


            
        	cout << endl;


        }

	}
} Matrix;



void Eingabe(string h) {
	if(h != "2D" && h !="3D") {
		cout << "Falsche eingabe!";
		return;
	}
	else if(h == "2D") {
			for(int i = 0; i < 2; i++) {
            	for(int j = 0; j < 2; j++) {
                	cout << "Geben Sie das Element (" << i+1 << "," << j+1 << ") der Matrix A ein: ";
                	cin >> Matrix.MatrixA[i][j];
            }
        } 	

        	for(int i = 0; i < 2; i++) {
            	for(int j = 0; j < 2; j++) {
                	cout << "Geben Sie das Element (" << i+1 << "," << j+1 << ") der Matrix B ein: ";
                	cin >> Matrix.MatrixB[i][j];
            }
        }
        Matrix.Matrix2D();
	}

	else if(h == "3D") { 
			for(int i = 0; i < 3; i++) {
            	for(int j = 0; j < 3; j++) {
                	cout << "Geben Sie das Element (" << i+1 << "," << j+1 << ") der Matrix A ein: ";
                	cin >> Matrix.MatrixA[i][j];
            }
            //Matrix A
        }
			for(int i = 0; i < 3; i++) {
            	for(int j = 0; j < 3; j++) {
                	cout << "Geben Sie das Element (" << i+1 << "," << j+1 << ") der Matrix B ein: ";
                	cin >> Matrix.MatrixB[i][j];
            }
        }
        //Matrix B
        Matrix.Matrix3D();
	}
}



int main() {
	string Input;
	cout << "Matrix\n";
	cout << "\nGeben sie die Dimension der Matrix ein: ";
	cout << "\n\tAuswahl: ""2D"" und ""3D""""";
	cout << "\nEingabe: ";
	cin >> Input;
	Eingabe(Input);


	return 0;
}