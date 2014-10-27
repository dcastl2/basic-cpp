#include <iostream>
#include <string>
using namespace std;

int main() {

	string s[3][3] = 
	                {{ 
		           "   _ ",
		           " /__/",
		           "/  / "
	                 },

	                 { 
		           "  ___",
		           " /   ",
		           "/___ "
	                 },

	                 { 
		           " ____",
		           "  /  ",
		           " /   "
	                 }};


	int i;
	for (i=0; i<3; i++) {
            cout << s[1][i];
            cout << s[0][i];
            cout << s[2][i];
	    cout << endl;
	}

}
