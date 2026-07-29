#include <iostream>
using namespace std;

class CMatrix {
public:
	int MatrixA[3][3];
	int MatrixB[3][3];

	void Matrix2D(string h, string s) {
		int run_once = 0;
		int run_once1 = 0;
		int run_once2 = 0;

		if(s == "+") {
		for(int i = 0; i < 2; i++) {
			for(int k = 0; k < 2; k++) {
				cout << MatrixA[k][i] << "  ";
			}

			for(int k = 0; k < 2; k++) {
				cout << MatrixB[k][i] << "  ";
			}
				if(run_once1 == 0) {
					cout << "      " << MatrixA[0][0] + MatrixB[0][0] << " " << MatrixA[1][0] + MatrixB[1][0];
					run_once1 = 1;
				}
				
				if(run_once == 0) {
					cout << endl << "     +       =";
					run_once = 1;
			}
				if(run_once2 == 1) {
					cout << "      " << MatrixA[0][1] + MatrixB[0][1] << " " << MatrixA[1][1] + MatrixB[1][1];
				}
				else {
					run_once2 = 1;
				}
			cout << endl;
		
		}
	}
			else {
			for(int i = 0; i < 2; i++) {
				for(int k = 0; k < 2; k++) {
					cout << MatrixA[k][i] << "  ";
				}

				for(int k = 0; k < 2; k++) {
					cout << MatrixB[k][i] << "  ";
				}
				if(run_once1 == 0) {
					cout << "      " << MatrixA[0][0] - MatrixB[0][0] << " " << MatrixA[0][1] - MatrixB[1][0];
					run_once1 = 1;
				}
				
				if(run_once == 0) {
					cout << endl << "     -       =";
					run_once = 1;
			}
				if(run_once2 == 1) {
					cout << "      " << MatrixA[0][1] - MatrixB[0][1] << " " << MatrixA[1][1] - MatrixB[1][1];
				}
				else {
					run_once2 = 1;
				}
			cout << endl;
			}

		
	}
}

	void Matrix3D(string h, string s) {
		int run_once = 0;
		int run_once1 = 0;
		if(s == "+3") {
		for(int i = 0; i < 3; i++) {
			for(int k = 0; k < 3; k++) {
				cout << MatrixA[k][i] << "  ";
			}


			//+
			if(run_once == 1) {
				cout << " + ";
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



			for(int k = 0; k < 3; k++) {
				cout << MatrixA[k][i] + MatrixB[k][i] << " ";
			}

			cout << endl;
			}
		}
		else {
		for(int i = 0; i < 3; i++) {
			for(int k = 0; k < 3; k++) {
				cout << MatrixA[k][i] << "  ";
			}


			//+
			if(run_once == 1) {
				cout << " - ";
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



			for(int k = 0; k < 3; k++) {
				cout << MatrixA[k][i] - MatrixB[k][i] << " ";
			}


			cout << endl;
			}
		
		}
	}

} Matrix;

void Eingabe(string h, string input1) {
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
        Matrix.Matrix2D(h,input1);
	}

	if(h == "3D") { 
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
        Matrix.Matrix3D(h,input1);
	}

}



int main() {
	string Input, Input1;
	cout << "Matrix\n";
	cout << "\nGeben sie die Dimension der Matrix ein: ";
	cout << "\n\tAuswahl: ""2D"" und ""3D""""";
	cout << "\nEingabe: ";
	cin >> Input;
	cout << "\nMoechten sie Minus oder Plus rechnen?\n (Plus = +; Minus = -)";
	cin >> Input1;
	Eingabe(Input, Input1);


	return 0;
}


