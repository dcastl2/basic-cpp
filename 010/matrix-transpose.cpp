#include <iostream>
using namespace std;

#define N 4
#define M 5

void transpose(int A[N][M], int B[M][N]) {
	int i, j;
	for (i=0; i<N; i++) {
	   for (j=0; j<M; j++) {
		B[j][i] = A[i][j];
	   }
	}
}

void print_matrix(int A[N][M]) {
	int i, j;
	for (i=0; i<N; i++) {
	   for (j=0; j<M; j++) {
		cout  <<  A[i][j] << ' ';
	   }
	   cout << endl;
	}
}

void print_matrix(int A[M][N]) {
	int i, j;
	for (i=0; i<M; i++) {
	   for (j=0; j<N; j++) {
		cout  <<  A[i][j] << ' ';
	   }
	   cout << endl;
	}
}

int main() {
	int i, j;
	int B[M][N];  // Matrix to copy to
	int A[N][M] = { 
		        {1, 2, 4, 3, 5},
		        {3, 5, 2, 1, 4},
		        {2, 3, 5, 4, 1},
		        {4, 1, 2, 5, 3}
	              };

	cout  <<  "Original:\n\n";
	print_matrix(A);
	transpose(A, B);
	cout  <<  "\n\nTranspose:\n\n";
	print_matrix(B);

	return 0;
}
