#include <iostream>
using namespace std;

int main() {
	int i, j, s=0, p=1, n;
	cout << "Enter n: ";
	cin  >> n;
	for (j=1; j<=n; j++) {
	    p = 1;
	    for (i=1; i<=j; i++) 
		p *= i;
	    s += p;
	}
	cout << "Sum of product: " << s << endl;
	return 0;
}
