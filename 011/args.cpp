#include <iostream>
#include <string>
#include <cstdlib>
#include "string.h"
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	int i;
	for (i=0; i<argc; i++) 
		cout << i << ": " << argv[i] << endl;
	return 0;
}
