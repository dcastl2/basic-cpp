#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int      charge;
	string   name, symbol;
	ifstream  infile;
	ofstream outfile;
	 infile.open("infile.dat");
	outfile.open("outfile.dat");
	if (infile && outfile) {
		while (infile >> name  
			      >> symbol
			      >> charge)   {
		      outfile << setw(4)  << symbol
			      << setw(12) << name   
			      << setw(4)  << charge
			      << endl;
		}
		cout << "Done!" << endl;
	} else {
		cout << "Error opening 'infile.dat' or 'outfile.dat'!";
		cout << endl;
	}
	return 0;
}
