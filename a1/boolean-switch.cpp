#include <iostream>
using namespace std;

int main() {
	bool a, b, c;
	cin >> a; cin >> b; cin >> c;
	if (c) a = !a;
	if (b) c = !c;
	if (a) b = !b;
	cout << a << " " << b << " " << c << endl;
	return 0;
}
