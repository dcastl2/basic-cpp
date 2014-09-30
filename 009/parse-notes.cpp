#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int half_steps(string note) {
	int n = (note[0] - 'A')*2;
	int i = 1;
	     if (note[1] == 'b') { i++; n--; }
	else if (note[1] == '#') { i++; n++; }
	n += (note[i] - '4')*7*2;
	return n;
}

int main() {
	string   note;
	ifstream infile;
	infile.open("notes.dat");
	if (infile) {
		while (infile >> note)   {
			cout << note << " is "  << half_steps(note);
			cout << " half-steps away from A4." << endl;
		}
	} else {
		cout << "Error opening file 'notes.dat'!" << endl;
	}
	return 0;
}
