#include <iostream>
using namespace std;

int main() {
	int i, j, s, p=1;
	cout << "Enter sum of product: ";
	cin  >> s;
	for (j=1; s>0; j++) {
	    p = 1;
	    for (i=1; i<=j; i++)
		    p *= i;
	    s -= p;
	}
	cout << "n must have been " << j-1 << endl;
	return 0;
}
