#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int half_steps(string note) {
	int n, offset=0;
	if (note[0]>='B') offset++;             // No semitone between B and C
	if (note[0]>='E') offset++;             // No semitone between E and F
	n = (note[0] - 'A')*2 - offset;
	int i = 1;                              // Index counter
	     if (note[1] == 'b') { i++; n--; }  // Account for flats/sharps
	else if (note[1] == '#') { i++; n++; }  
	n += (note[i] - '4')*12;                // Number of semitones per octave
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
