#include <string>
#include <fstream>
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <stdint.h>
#include "sound.h"
using namespace std;

#define A   ___
#define R  ____
#define f0  ___

namespace snd {

	int half_steps(string note) {
		int n, offset=0;
		if (note[0]>'B') offset++;
		if (note[0]>'E') offset++;
		n = (note[0] - 'A')*2 - offset;
		int i = 1;
		     if (note[1] == 'b') { i++; n--; }
		else if (note[1] == '#') { i++; n++; }  
		n += (note[i] - '4')*12;
		return n;                               
	}

	_______ ____ (_____ _, _____ _) {
		return ___________________;
	}

	_____   ____ (______ ____) {
		return __*___(___(___, ___/____), (_____)__________(____));
	}

	void    play (string note, float d) {
		ofstream outfile;
		outfile.open("sound.raw", ios::app);
		float f = ____(____);
		float t;
		for (___; _<=___; _++) {
			outfile << wave(f, t);
		}
	}

}
