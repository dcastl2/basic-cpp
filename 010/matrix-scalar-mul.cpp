#include <iostream>
#include <iomanip>
using namespace std;

#define N 4
#define M 5

void scalar_mul(int a[N][M], int b) {
	int i, j;
	for (i=0; i<N; i++) {
	   for (j=0; j<M; j++) {
		a[i][j] *= b;
	   }
	}
}

void print_matrix(int a[N][M]) {
	int i, j;
	for (i=0; i<N; i++) {
	   for (j=0; j<M; j++) {
		cout  <<  setw(4) << a[i][j];
	   }
	   cout << endl;
	}
}

int main() {
	int i, j;
	int a[N][M] = { 
		        {1, 2, 4, 3, 5},
		        {3, 5, 2, 1, 4},
		        {2, 3, 5, 4, 1},
		        {4, 1, 2, 5, 3}
	              };
	cout  <<  "Original:\n\n";
	print_matrix(a);
	scalar_mul(a, 2);
	cout  <<  "\n\nScalar multiplication:\n\n";
	print_matrix(a);

	return 0;
}
