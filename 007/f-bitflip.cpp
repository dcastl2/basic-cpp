#include <iostream>
using namespace std;

void bool_switch(bool a, bool b, bool c) {
	if (a) b = !b;
	if (b) c = !c;
	if (c) a = !a;
	cout << a << " " << b << " " << c;
}

int main() {
	bool a, b, c;
	cin >> a; cin >> b; cin >> c;
	bool_switch(a, b, c);
	cout << endl;
}
