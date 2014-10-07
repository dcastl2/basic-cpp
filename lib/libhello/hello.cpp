#include <iostream>
#include <string>
#include "unistd.h"
#include "hello.h"
using namespace std;

/**
 * Types out to console.
 */
namespace hi {

	string hello(string s) {
		return  "Hello, "+s+"!\n";
	}

	void count(int n) {
		int  i;
		for (i=1; i<=n; i++)
			cout << i << " ";
		cout << endl;
	}

}
