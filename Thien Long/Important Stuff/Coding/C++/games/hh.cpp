#include <iostream>
#include <array>
#include <vector>
using namespace std;


int main(int argc, char const *argv[]) {
	vector<vector<int>> matrix(3, vector<int>(3, 0));
	matrix[0][0] = 1;
	cout << matrix[0][0];
	return 0;
}