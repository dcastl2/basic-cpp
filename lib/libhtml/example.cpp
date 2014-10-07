#include <iostream>
#include "html.h"
using namespace std;
using namespace htm;

int main() {
	string url  = "http://tinyurl.com/2vc6ym";
	cout << header();
	cout << ul(5);
	cout << table(2, 2);
	cout << img(url);
	cout << footer();
	return 0;
}
