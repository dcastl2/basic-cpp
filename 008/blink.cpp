#include <iostream>
#include <string>
#include "unistd.h"
using namespace std;

/**
 * Blinks messages a, b for t1, t2 respectively.
 */
void blink( string        a, 
            string        b, 
	    unsigned int t1, 
	    unsigned int t2 ) {
    int i;
    cout << string(80, '\n');
    while (true) {
        cout << a;
        usleep(t1);
        cout << string(80, '\n');
        cout << b;
        usleep(t2);
        cout << string(80, '\n');
    }
}

int main() {
    string now  = "Hello \n";
    string open = "World!\n";
    blink(now, open, 300000, 300000);
    cout << endl;
    return 0;
}
