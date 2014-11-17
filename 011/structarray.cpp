#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
using namespace std;

#define N 5

struct character {
	int hp, mp, lvl;
	string name;
};

int main() {
	int i;
	character party[N];
	string names[] = {
		     "D. Castleberry",
		     "J. Bordelon",
		     "N. Tomba",
		     "J. Gomez-Piniero",
		     "T. Landry"
	            };
	srand(time(NULL));
	for (i=0; i<N; i++) {
		party[i].lvl =  4  + rand()%3;
		party[i].hp  =  20*party[i].lvl + rand()%20;
		party[i].mp  =  10*party[i].lvl + rand()%10;
		party[i].name = names[i];
	}
	party[0].hp  += 100;
	party[0].mp  +=  50;
	party[0].lvl +=  10;

	for (i=0; i<N; i++) {
		cout << "Lvl:  " << party[i].lvl  << endl;
		cout << "HP:   " << party[i].hp   << endl;
		cout << "MP:   " << party[i].mp   << endl;
		cout << "Name: " << party[i].name << endl;
		cout << endl;
	}
	return 0;
}
