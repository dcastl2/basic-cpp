#include <iostream>
using namespace std;

int fib(int n) {
	int i, fn2=1, fn1=1, fn;
	for(i=3; i<=n; i++) {
		fn = fn1 + fn2;
		fn1 = fn2;
		fn2 = fn;
	}
	return fn;
}

int main() {
	cout << fib(7) << endl;
	return 0;
}
