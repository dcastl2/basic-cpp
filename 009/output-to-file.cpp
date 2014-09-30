#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int start=33, end=126, i;
	ofstream outfile;
	outfile.open("ascii.dat");
	if (outfile) {
		for (i=start; i<=end; i++) {
			outfile << left  << setw(4) <<        i;
	                outfile << right << setw(4) << (char) i << endl;
		}
	}
}
