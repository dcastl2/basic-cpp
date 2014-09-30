#include <iostream>
using namespace std;

int add(int a, int b) { return a+b; }
int sub(int a, int b) { return a-b; }
int mul(int a, int b) { return a*b; }
int div(int a, int b) { return a/b; }

int main() {
	  cout << mul(sub(1,2), sub(3,4)) << " ";
	  cout << add(div(4,3), sub(2,1)) << " ";
	  cout << sub(mul(1,2), sub(3,4)) << " ";
	  cout << add(div(4,3), add(2,1)) << " ";
	  cout << endl;
}
