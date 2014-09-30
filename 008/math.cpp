#include <iostream>
#include <cmath>
using namespace std;

int main() {

	float x=sqrt(2), y=M_PI;

	cout << sin(y) << endl;
	cout << cos(y) << endl;
	cout << tan(y) << endl;
	cout << endl;

	cout << asin(1/x) << endl;   // Arc
	cout << acos(1/x) << endl;
	cout << atan(1/x) << endl;
	cout << endl;

	cout << cosh(x) << endl;     // Hyperbolic 
	cout << sinh(x) << endl;
	cout << tanh(x) << endl;
	cout << endl;

	cout << log(x)   << endl;    // Natural log
	cout << log2(x)  << endl;    // Base  2 log
	cout << log10(x) << endl;    // Base 10 log
	cout << endl;

	cout << pow(x,y) << endl;    // x^y
	cout << sqrt(y)  << endl;    // Square root
	cout << exp(y)   << endl;    // e^(x)
	cout << endl;

	cout << ceil(x)  << endl;    // Round number up
	cout << floor(x) << endl;    // Round down
	cout << round(x) << endl;    // Round off 

	cout << abs(-x)  << endl;    // Absolute value

	return 0;
}
