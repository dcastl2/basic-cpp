#include <iostream>
#include <cmath>
using namespace std;

int f(int x) {
	return pow(x, 2);
}

int main() {
	int x=0;
	for (x=-5; x<=5; x++)
		cout << f(x) << " ";
	return 0;
}
