#include <iostream>
#include <string>
#include <cstdlib>
#include "string.h"
#include <fstream>
using namespace std;

#define N 8

bool isascii(char c) {
	if (c > 31 && c < 125) return true;
	else                   return false;
}

int main() {
	ifstream infile;
	infile.open("floppy.dat", ios::binary);
	char* c = new char[1];
	bool end = false;
	char block[N];
	int i;
	while (infile.read(c,1)) {                                  // Read to end
		if (isascii(c[0])) {                                // If ASCII char
			     if (i   <  N) block[i++] =     c[0];   // If buffer not full, load into buffer
			else if (i++ == N) cout << block << c[0];   // If buffer full, cout it and next char
			else               cout <<          c[0];   // Otherwise cout characters
		} else {
			if (i>N) cout << endl;
			i = 0;
		}
	}
	infile.close();
	return 0;
}
