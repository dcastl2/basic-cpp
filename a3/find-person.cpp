#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

#define N 53
#define M 10

int argmin(int x[]) {
	int i;
	int min = x[0], argmin=0;
	for (i=0; i<N; i++)
		if (min > x[i]) {
		    min = x[i];
		    argmin = i;
		}
	return argmin;
}

int argmax(int x[]) {
	int i;
	int max = x[0], argmax=0;
	for (i=0; i<N; i++)
		if (max < x[i]) {
		    max = x[i];
		    argmax = i;
		}
	return argmax;
}

int manhattan(int x[], int y[]) {
	// TODO: fill this out
	return 0;
}


int main() {

	int d[N];      // Manhattan distances
	int p[N][M];   // Personality matrix
	int i, j;

	ifstream infile;
	infile.open("neo-ffi.dat");

	if (infile) {
	    // TODO: Read entries into file
	} else {
		cout << "File could not be opened!";
		exit(1);
	}

	// TODO: Replace this vector with your own
	int  me[M] = {4,1,1,3,1,4,4,5,3,5};  
	int you[M];
	for (i=0; i<N; i++) {
	    for (j=0; j<M; j++) {
		    //you[j] = p[i][j];
	    }
	    //d[i] = manhattan(me, you);
	}

	// TODO: use argmin and argmax to find most similar
	// and different people, then print them out

	return 0;
}
