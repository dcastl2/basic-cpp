#include <iostream>
using namespace std;

void hello() {
	cout << "Hello, world!\n";
	hello();
}

int main() {
	hello();
	return 0;
}
