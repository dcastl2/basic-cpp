#include <iostream>
#include <iomanip>
using namespace std;

#define N 4
#define M 5

void print_matrix(int A[N][M]);
void print_matrix(int A[M][N]);
void print_square(int A[N][N]);

// c_ij = sum from k to M of a_ik * b_kj
void matrix_mul(int A[N][M], int B[M][N], int C[N][N]) {
	int i, j, k;
	for (i=0; i<N; i++) {
	   for (j=0; j<N; j++) {
	       C[i][j] = 0;
	       for (k=0; k<M; k++) 
	           C[i][j] += A[i][k] * B[k][j];
	   }
	}
}

int main() {
	int A[N][M] = { 
		        {1, 2, 4, 3, 5},
		        {3, 5, 2, 1, 4},
		        {2, 3, 5, 4, 1},
		        {4, 1, 2, 5, 3}
	              };
	int B[M][N] = { 
		        {3, 5, 2, 1},
		        {1, 2, 4, 3},
		        {4, 1, 2, 5},
		        {1, 4, 3, 5},
		        {2, 3, 5, 4} 
	              };
	int C[N][N];

	cout  <<  "A:\n\n";
	print_matrix(A);
	cout  <<  "\n\nB:\n\n";
	print_matrix(B);
	matrix_mul(A, B, C);
	cout  <<  "\n\nA*B:\n\n";
	print_square(C);

	return 0;
}

void print_matrix(int A[N][M]) {
	int i, j;
	for (i=0; i<N; i++) {
	   for (j=0; j<M; j++) {
		cout  <<  setw(4) << A[i][j];
	   }
	   cout << endl;
	}
}

void print_matrix(int A[M][N]) {
	int i, j;
	for (i=0; i<M; i++) {
	   for (j=0; j<N; j++) {
		cout  <<  setw(4) << A[i][j];
	   }
	   cout << endl;
	}
}

void print_square(int A[N][N]) {
	int i, j;
	for (i=0; i<N; i++) {
	   for (j=0; j<N; j++) {
		cout  <<  setw(4) << A[i][j];
	   }
	   cout << endl;
	}
}
