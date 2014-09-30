#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void f(int x1, int x2, int y1, int y2) {
	int x, y;
	cout << setw(12) << '*';
	for (y=y1; y<=y2; y++)
	    cout << setw(8) << y;
	cout << endl;
	cout << setw(12) << ' ';
	for (y=y1; y<=y2; y++)
	    cout << setw(8) << '_';
	cout << endl;
	for (x=x1; x<=x2; x++) {
	  cout << setw(4) << x << setw(8) << '|';
	  for (y=y1; y<=y2; y++)
	    cout << setw(8) << x*y;
	  cout << endl;
	}
}

int main() {
	f(-5,10,3,10);
	return 0;
}
