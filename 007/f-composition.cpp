#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float halve(float x) {
	return x/2;
}

float increment(float x) {
	return x+1;
}

float square(float x) {
	return x*x;
}

int main() {
	cout << halve(square(increment(3)));
	cout << endl;
	return 0;
}
