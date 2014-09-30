#include <iostream>
#include "algebra.h"
using namespace std;
using namespace alg;

int main() {

	float a, b, c;
	float m, y0;

	cout << "Enter a, b, and c: ";
	cin >> a; cin >> b; cin >> c;
	cout << quadratic(a,b,c) << endl;

	cout << "Enter m and y0: ";
	cin >> m; cin >> y0;
	cout << x_intercept(m,y0) << endl;

	return 0;

}
