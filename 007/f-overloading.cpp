#include <iostream>
using namespace std;

int   sum(int   a, int   b);
float sum(float a, float b);

int main() {
	cout << sum(1,2) << endl;
	cout << sum(
	            (float)(1.0), 
		    (float)(2.0)
		   ) 
	     << endl;
}

int sum (int a, int b) {
	cout << "Integer sum: ";
	return a+b;
}

float sum(float a, float b) { 
	cout << "Floating-point sum: ";
	return a+b;
}
