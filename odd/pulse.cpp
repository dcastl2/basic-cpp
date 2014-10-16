#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include <time.h>
using namespace std;

#define N 30
#define M 60

void print_board(bool x[N][M]) {
	int i, j;
	for (i=0; i<N; i++) {
	    for (j=0; j<M; j++) 
		         if (x[i][j]) cout << '*';
	            else if (i==0)    cout << '=';
	            else if (j==0)    cout << '|';
	            else if (i==N-1)  cout << '=';
	            else if (j==M-1)  cout << '|';
	            else              cout << ' ';
	    cout << endl;
	}
	return;
}

void board(bool b[N][M], int t) {
	int i, j;
	for (i=0; i<N; i++) 
	    for (j=0; j<M; j++) {
		    float x = (i-N/2), 
			  y = (j-M/2);              // Center coords
		    float r = sqrt(x*x+y*y/4);      // Radius
		    bool  c = abs((t%20) - r) <= 1; // Pulse radially every 20 iterations
		    b[i][j] = (c) ? 1 : 0;
	    }
	return;
}

int main() {
	int t = 0;
	bool x[N][M];
	while (true) {
		board(x, t++);
		cout << string(80, '\n');
		print_board(x);
		usleep(30000);
	}
	return 0;
}
