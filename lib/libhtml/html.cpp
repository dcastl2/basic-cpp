#include <iostream>
#include <string>
#include "unistd.h"
#include "html.h"
using namespace std;

/**
 * Creates strings of HTML given params.
 */
namespace htm {

	string header() {
		return " <html>\n  <body>\n";
	}

	string footer() {
		return "\n </body>\n</html>\n";
	}

	string img(string path) {
		return "\n <img src="+path+">\n";
	}

	string ul(int n) {
		int i;
		string s = "\n  <ul>\n";
		for (i=0; i<=n; i++)
			s += "      <li>\n";
		s += " </ul>\n";
		return s;
	}

	string table(int n, int m) {
		int i, j;
		string s = "\n  <table>\n";
		for (i=0; i<n; i++) {
		  s += "         <tr>\n";
		  for (j=0; j<m; j++) {
			s += "             <td>\n";
			s += "            </td>\n";
		  }
		  s += "        </tr>\n";
		}
		s += " </table>\n";
		return s;
	}

}
