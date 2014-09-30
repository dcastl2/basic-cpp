#include <iostream>
using namespace std;

void hello();
void goodbye();

int main() {
	hello();
	goodbye();
}

void hello()   { cout << "Hello, world!\n";   }
void goodbye() { cout << "Goodbye, world!\n"; }
