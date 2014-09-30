#include <iostream>
using namespace std;

void A(int a, int c, int b) { cout << a << b << c+1;    }
void B(int b, int c, int a) { A(c,   a+1,  b);          }
void C(int a, int b, int c) { B(b+1, a,    c);          }

void twistup(int a, int b, int c) { C(a, b, c); }

int main() {
        int a=1, b=2, c=3;
        twistup(a, b, c);
	cout << endl;
}
