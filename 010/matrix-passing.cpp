#include <iostream>
using namespace std;

void print_matrix(int A[4][5]) {
	int i, j;
	for (i=0; i<4; i++) {
	   for (j=0; j<5; j++) 
		cout << A[i][j] << " ";
	   cout << endl;
	}
}

int main() {
	int A[4][5] = { 
		        {1, 2, 4, 3, 5},
		        {3, 5, 2, 1, 4},
		        {2, 3, 5, 4, 1},
		        {4, 1, 2, 5, 3}
	              };
	print_matrix(A);
	return 0;
}
