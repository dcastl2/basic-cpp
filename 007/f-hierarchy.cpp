#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void a() {
	cout << "This is a." << endl;
}

void b() {
	cout << "This is b, calling a." << endl;
	a();
}

void c() {
	cout << "This is c, calling b." << endl;
	b();
}

int main() {
	c();
	return 0;
}
