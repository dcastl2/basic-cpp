#include <iostream>
using namespace std;

void count(int i) {
	cout << i << endl;
	count(i+1);
}

int main() {
	count(0);
	return 0;
}
