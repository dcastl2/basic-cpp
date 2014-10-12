#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <time.h>
using namespace std;

#define N 25
#define M 60

bool empty(bool x[M][N]) {
	int i, j, sum=0;
	srand(time(NULL));
	for (i=0; i<=N; i++) 
	    for (j=0; j<=M; j++) 
		    sum += x[i][j];
	if (sum==0) return 1;
}

void clean_board(bool x[M][N]) {
}

void print_board(bool x[M][N]) {
	int i, j;
	for (i=0; i<=N; i++) {
	    for (j=0; j<=M; j++) 
	                 if (i==0)         cout << '=';
	            else if (j==0)         cout << '|';
	            else if (i==N)         cout << '=';
	            else if (j==M)         cout << '|';
		    else if (x[i][j] == 1) cout << '*';
	            else                   cout << ' ';
	    cout << endl;
	}
	return;
}

void next_board(bool x[M][N]) {

	int i, j, dx, dy;

	// Copy old board
	int y[M][N];
	for (i=1; i<N; i++) {
	    for (j=1; j<M; j++) {
		    y[i][j] = x[i][j];
	    }
	}

	// Compute new board
}

int main() {

	srand(time(NULL));
	int  i, j; 
	bool x[M][N];

	// Initialize board here
	
	print_board(x);
	usleep(1000000);
	int k = 1;
	while (true) {
	        // Evolve the board here
	}	

	return 0;
}
