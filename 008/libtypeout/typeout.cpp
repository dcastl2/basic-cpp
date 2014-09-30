#include <iostream>
#include <string>
#include "unistd.h"
#include "typeout.h"
using namespace std;

/**
 * Types out to console.
 */
namespace typ {

	void typeout(string str) {
	    int i;
	    unsigned int naptime = 30000;     //!< Time delay between characters
	    for (i=0; i<str.size(); i++) {
	        cout << str[i] << std::flush;
	        usleep(naptime);
	    }
	    usleep(naptime);
	}

	void typeout(string str, unsigned int naptime) {
	    int i;
	    for (i=0; i<str.size(); i++) {
	        cout << str[i] << std::flush;
	        usleep(naptime);
	    }
	    usleep(naptime);
	}

	void typeout(int a, int b, int step) {
	    int i;
	    unsigned int naptime = 30000;     //!< Time delay between characters
	    for (i=a; i<=b; i+=step) {
	        cout << i   << std::flush;
		cout << " " << std::flush;
	        usleep(naptime);
	    }
	    usleep(naptime);
	    cout << endl;
	}

	void typeout(int a, int b, int step, unsigned int naptime) {
	    int i;
	    for (i=a; i<=b; i+=step) {
	        cout << i   << std::flush;
		cout << " " << std::flush;
	        usleep(naptime);
	    }
	    usleep(naptime);
	    cout << endl;
	}

}
