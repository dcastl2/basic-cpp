#include <iostream>
#include "seq.h"
using namespace std; 
using namespace seq; 

int main() {
	seq::seq(1,10,2);
	cout << sum(1,10,1) << endl;
	cout << prd(1,10,1) << endl;
	return 0;
}
