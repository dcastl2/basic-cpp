#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int      sylls;
	string   word;
	ifstream infile;
	infile.open("words.txt");
	if (infile) {
		while (infile >> word  >> sylls)   {
			cout  << left  << setw(4)  << sylls;
		    	cout  << left  << setw(10) << word  << endl;
		}
	} else {
		cout << "Error opening file 'words.txt'!" << endl;
	}
	return 0;
}
