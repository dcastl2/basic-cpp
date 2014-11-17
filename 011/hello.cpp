#include <iostream>
#include <string>
#include <cstdlib>
#include "string.h"
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	if (argc != 2) exit(1);
	else cout << "Hello, " << argv[1] 
		  << "!"       << endl;
	return 0;
}
