#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	int a,b,c,i,j=0,s,N;
	cout << "N trials: ";
	cin  >> N;
	srand(time(NULL));
	for (i=1; i<=N; i++) {
	  a=rand()%6+1;
	  b=rand()%6+1;
	  cout << a << "," << b;
          s=a+b;
	  if (s==7 or s==11) {
		  cout << " <- " << s << "!";
		  j++;
	  }
	  cout << endl;
	}
	cout << endl << "p is " << (float) j/N << endl;
	return 0;
}
