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

int charge (string n) {
	int      charge;
	string   name, symbol;
	ifstream infile;
	infile.open("ions.dat");
	if (infile) {
		while (infile >> name 
			      >> symbol 
			      >> charge) {
			if (n == name)
				return charge;
		}
	}
	cout << '`' << n << "' was not found." << endl;
	exit(1);
}

int main() {
	string first, second;
	cout << "Enter first product: ";
	cin  >> first;
	cout << "Enter second product: ";
	cin  >> second;
	string s1 = symbol(first);
	string s2 = symbol(second);
	cout << s1
             << " + "
	     << s2
             << " -> ";
	if (abs(charge(second))==1) cout << symbol(first);
	else {                      cout << "(" << symbol(first) << ")";
	                            cout << abs(charge(second));
	}
	if (abs(charge(first))==1)  cout << symbol(second);
	else {                      cout << "(" << symbol(second) << ")";
	                            cout << abs(charge(first));
        }
	
	cout << endl << "Makes " << first << " " << second << "." << endl;
	return 0;
}
