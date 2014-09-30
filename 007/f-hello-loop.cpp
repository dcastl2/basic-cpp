#include <iostream>
#include <iomanip>
using namespace std;

void hello() {
	cout << "Hello, world!\n";
}

int main() {
	int i;
	for (i=1; i<=10; i++)  {
	  cout << setw(2) << i << ": ";
	  hello();
	}
}
