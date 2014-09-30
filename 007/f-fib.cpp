#include <iostream>
using namespace std;

int fib(int i) {
	int j, f1=1, f2=1, f;
	for (j=1; j<=i; j++) {
		f  = f1 + f2;
		cout << f2  << "+" << f1 << "=";
		cout << f   << "," << endl;
		f1 = f2;
		f2 = f;
	}
	return f;
}

int main() {
	cout << fib(5) << endl;
}
