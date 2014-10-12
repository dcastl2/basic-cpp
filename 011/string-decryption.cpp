#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <unistd.h>
using namespace std;

void swap(int &a, int &b) {
	int c = a;
	    a = b;
	    b = c;
}

void show(string a, int n, int x, int y) {
	int i;
	cout << string(80, '\n');
	for (i=0; i<n; i++)
		cout << a[i] << ' ';
	cout << endl;
	for (i=0; i<n; i++)
		if (i==x || i==y) cout << '^'  << ' ';
		else              cout << ' '  << ' ';
	cout << flush;
	usleep(1.0/4*pow(10,6));
}

int main() {

	string s = "CASTLEBERRY";
	int i, j, k, l, n=11;

	// Forward direction
	for (i=0; i<n; i++) {
		j = ((i * 3) + 5) % n;
		swap(s[i], s[j]);
		show(s, n, i, j);
	}
	show(s, n, -1, -1);
	cout << endl;

	// Backward direction
	for (i=n-1; i>=0; i--) {
		j = ((i * 3) + 5) % n;
		swap(s[i], s[j]);
		show(s, n, i, j);
	}
	show(s, n, -1, -1);
	cout << endl;

}
