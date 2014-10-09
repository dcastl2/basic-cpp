#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float f(float x) {
	return   abs(x)             + 
		(1.0/2.0)*pow(x, 2) +
		(1.0/3.0)*pow(x, 3) +
		sin(x)*exp(-x);
}

int main() {
	float x, h=.001, fp;
	cout << "x> ";
	cin  >> x;
	fp = (f(x+h) - f(x-h))/(2*h);
	cout << "x : " << setprecision(2) << setw(8) << x    << endl;
	cout << "f : " << setprecision(2) << setw(8) << f(x) << endl;
	cout << "f': " << setprecision(2) << setw(8) << fp   << endl;
	return 0;
}
