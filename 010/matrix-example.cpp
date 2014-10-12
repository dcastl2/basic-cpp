#include <iostream>
using namespace std;

#define N 4 
#define M 5 

int main() {
	int A[N][M] = { 
		        {1, 2, 4, 3, 5},
		        {3, 5, 2, 1, 4},
		        {2, 3, 5, 4, 1},
		        {4, 1, 2, 5, 3}
	              };
	int i, j;
	for (i=0; i<N; i++) {
	   for (j=0; j<M; j++) 
		cout << A[i][j] << " ";
	   cout << endl;
	}
	return 0;
}
