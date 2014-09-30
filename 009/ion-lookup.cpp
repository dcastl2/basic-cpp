#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;

string symbol (string n) {
	int      charge;
	string   name, symbol;
	ifstream infile;
	infile.open("ions.dat");
	if (infile) {
		while (infile >> name 
			      >> symbol 
			      >> charge) {
			if (n == name)
				return symbol;
		}
	}
	cout << '`' << n << "' was not found." << endl;
	exit(1);
}

int main() {
	string  ion;
	cout << "Enter the ion name: ";
	cin  >> ion;
	cout << "The corresponding symbol is " << symbol(ion);
	cout << "." << endl;
	return 0;
}
