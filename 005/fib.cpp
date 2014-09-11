#include <iostream>
using namespace std;

int main() {
	int i, f1=1, f2=1, f3;
	cout << "1 1 ";
	for (i=1; i<=10; i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		cout << f3 << " ";
	}
	cout << endl;
	return 0;
}
