#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

int sign (int a) {
	     if (a>0) return  1;
	else if (a<0) return -1;
	else          return  0;
}

int main(int argc, char** argv) {
	if (argc != 4) { 
		cout << "Usage: " << argv[0]
		     << " a b j " << endl;
		exit(1);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int j = atoi(argv[3]);
	int i, s=0;
	if (sign(b-a) != sign(j) || sign(j) == 0) {
		cout << "Sum from "    << a << " to " << b
		     << " in steps of " << j << " is ";
		     if (sign(j)   == 0) cout << "illegal.";
		else if (sign(b-a) == 0) cout << b;
		else                     cout << "infinite.";
		cout << endl;
		exit(1);
	}
	if (b>a) for (i=a; i<=b; i+=j)  s += i;
	else     for (i=a; i>=b; i+=j)  s += i;
	cout << "Sum is: " << s << endl;
	return 0;
}
