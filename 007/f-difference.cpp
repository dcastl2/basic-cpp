#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float f(float x) {
	return pow(x, 2) - 5*x + 6;
}

int main() {

	float x, h=.001, fp;

	cout << "x> ";
	cin  >>  x;
	cout <<  endl;

        fp   =  (f(x+h) - f(x-h)) / (2*h);

	cout << "x    : " << setw(12) << setprecision(4) << x    << endl;
	cout << "f(x) : " << setw(12) << setprecision(4) << f(x) << endl;
	cout << "f'(x): " << setw(12) << setprecision(4) << fp   << endl;

	return 0;

}
