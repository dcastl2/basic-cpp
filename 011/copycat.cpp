#include <iostream>
#include <string>
#include <cstdlib>
#include "string.h"
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	if (strcmp(argv[0],"j.bin")==0) exit(0);
	ifstream me;
	ofstream you;
	me.open(argv[0], ios::binary);
	argv[0][0]++;
	you.open(argv[0], ios::binary);
	char* c = new char[1];
	while (me.read(c,1)) {
		you.write(c, 1);
	}
	me.close();
	you.close();
	char *cmd;
	cmd = new char[16];
	strcpy(cmd, "chmod 755 ");
	strcat(cmd, argv[0]);
	system(cmd);
	system(argv[0]);
	return 0;
}
