#include <iostream>
#include <string>
using namespace std;

struct character {
	int hp, mp;
	string name;
};

int main() {
	character dc;
	dc.hp   = 100;
	dc.mp   =  50;
	dc.name = "D. Castleberry";
	cout << "HP:   " << dc.hp   << endl;
	cout << "MP:   " << dc.mp   << endl;
	cout << "Name: " << dc.name << endl;
	return 0;
}
