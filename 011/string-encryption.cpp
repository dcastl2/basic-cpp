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
	usleep(pow(10,6));
}

int main() {

	string s = "CASTLEBERRY";
	int i, j, n=11;

	for (i=0; i<n; i++) {
		j = ((i + 2) * 3) % n;
		swap(s[i], s[j]);
		show(s, n, i, j);
	}
	show(s, n, -1, -1);
	cout << endl;

}
