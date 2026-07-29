#include <iostream>
#include <vector>
#include <array>
using namespace std;

// line (nothing) = 0
// line x = 1
// line O = 2
const int n = 10;
vector<vector<int>> matrix(n, vector<int>(n, 0));

void print_matrix();
int check_row();
int check_diagonal();

int main(int argc, char const *argv[]) {
	int plr = 1;

	while(true) {
		// check for win
		if(check_row() || check_diagonal()) {
			print_matrix();
			if(plr == 1) cout << "Player x won!";
			if(plr == 2) cout << "Player O won!";
			return 0;
		}
		if(plr == 1) cout << "It's x turn!" << endl;
		if(plr == 2) cout << "It's O turn!" << endl;

		print_matrix();

		int x, y;
		cout << "Enter x: "; cin >> x;
		cout << "Enter y: "; cin >> y;
		x--;
		y--;

		// idk why but array requires y x and not x y
		if(x < n && y < n && matrix[y][x] != 0) {
			system("cls"); cout << "Invalid input! Please try again.\n\n"; continue;
		}

        matrix[y][x] = plr;


		// switch plr
		if(plr == 1) plr = 2;
		else plr = 1;
    	system("cls");
	}
	return 0;
}


// prints matrix
void print_matrix() {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(matrix[i][j] == 1) { cout << "X "; continue; }
			if(matrix[i][j] == 2) { cout << "O "; continue; }
			cout << "* ";
		}
		cout << endl;
	}
}
// [y][x] = [row][column]
int check_row() {
	array<int, n> vec{};

	// check win for horizontal row
	for(int x = 0; x < n; x++) {
		// init one row
		for(int y = 0; y < n; y++) {
			vec[y] = matrix[y][x];
		}
		// check for win
        if (vec[0] != 0 && vec[0] == vec[1] && vec[1] == vec[2]) return 1; // win
        for(int i = 0; i < n; i++) {
        	if (/* condition */)
        	{
        		/* code */
        	}
        }
	}

	// check win for vertical row
	for(int x = 0; x < n; x++) {
		// init one row
		for(int y = 0; y < n; y++) {
			vec[y] = matrix[x][y];
		}
		// check for win
        if (vec[0] != 0 && vec[0] == vec[1] && vec[1] == vec[2]) return 1; // win
	}
	return 0; // it's a win
}

int check_diagonal() {
	array<int, n> vec{};

	for (int i = 0; i < n; i++) {
    	vec[i] = matrix[i][i];
    }
	if (vec[0] != 0 && vec[0] == vec[1] && vec[1] == vec[2]) return 1; // win


	for (int i = 0; i < n; i++) {
    	vec[i] = matrix[i][n - 2 - i];
    }
	if (vec[0] != 0 && vec[0] == vec[1] && vec[1] == vec[2]) return 1; // win

    return 0;
}