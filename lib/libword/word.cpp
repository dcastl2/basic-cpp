#include <iostream>
#include <string>
#include "unistd.h"
#include "word.h"
using namespace std;

/**
 * Types out to console.
 */
namespace wrd {

	void swap(char &a, char &b) {
		char c = a;
		     a = b;
		     b = c;
	}

	void typeout(string s) {
	    int i;
	    unsigned int naptime = 30000;
	    for (i=0; i<s.size(); i++) {
	        cout << s[i] << std::flush;
	        usleep(naptime);
	    }
	    usleep(naptime);
	    cout << endl;
	}

	void reverse(string s) {
	    int i, j, S = s.size();
	    unsigned int naptime = 300000;
	    for (i=0; i<S/2; i++) {
		swap(s[i], s[S-i-1]);
	        cout << s << endl;
	        for (j=0; j<S; j++) {
			if (j==i || j==(S-i-1)) cout << '^';
			else                    cout << ' ';
		}
		cout << endl << std::flush;
	        usleep(naptime);
	    }
	    cout << s << endl;
	    for (j=0; j<S; j++) cout << '*';
	    usleep(naptime);
	    cout << endl;
	    return;
	}

	void blink(string a, string b, int n) {
	    int i;
	    unsigned int naptime = 300000;
	    for (i=0; i<n; i++) {
		cout << string(80, '\n');
	        cout << a << std::flush;
	        usleep(naptime);
		cout << string(80, '\n');
	        cout << b << std::flush;
	        usleep(naptime);
	    }
	    usleep(naptime);
	    cout << endl;
	}

}
