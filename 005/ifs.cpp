#include <iostream>
using namespace std;

int main() {
	bool a, b, c;
	cin >> a; cin >> b; cin >> c;
	     if (a)       if (b)    cout << "t";
		     else if (c)    cout << "i";
	             else           cout << "c";
	else if (b)       if (c)    cout << "k";
                     else           cout << "l";
	else if (c)                 cout << "e";
        else                        cout << "r";
	cout << endl;
}
