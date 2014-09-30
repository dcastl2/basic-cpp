#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void f(int x1, int x2, int x3) {
	cout << "First  argument: " << x1 << endl;
	cout << "Second argument: " << x2 << endl;
	cout << "Third  argument: " << x3 << endl;
}

int main() {
	f(2, 3, 5);
	return 0;
}
