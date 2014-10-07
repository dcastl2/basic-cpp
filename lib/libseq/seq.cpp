#include <iostream>
using namespace std; 

namespace seq {
	
	void seq(int a, int b, int j) {
		int i;
		for (i=a; i<=b; i+=j) 
			cout << i << " ";
		cout << endl;
		return;
	}
	
	int  sum(int a, int b, int j) {
		int  i, sum  = 0;
		for (i=a; i<=b; i+=j) 
			sum += i;
		return  sum;
	}
	
	int  prd(int a, int b, int j) {
		int  i, prd  = 1;
		for (i=a; i<=b; i+=j) 
			prd *= i;
		return  prd;
	}
	
}
