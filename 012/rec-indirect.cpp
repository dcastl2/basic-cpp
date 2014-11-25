#include <iostream>
using namespace std;

void a(int n);
void b(int n);

void a(int n) {
	cout << -(n++) << endl;
	b(n);
}

void b(int n) {
	cout <<  (n++) << endl;
	a(n);
}

int main() {
	a(0);
	return 0;
}
