#include <string>
using namespace std;

namespace htm {
	string header();              // opening <html>, <body>
	string ul    (int n);         // unordered list of size n
	string table (int n, int m);  // table of n rows by m columns
	string img   (string url);    // include image from url 
	string footer();              // closing </body>, </html>
}
