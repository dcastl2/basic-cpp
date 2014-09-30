#include <iostream>
using namespace std;

int add(int a, int b) { return a+b; }
int sub(int a, int b) { return a-b; }
int mul(int a, int b) { return a*b; }
int div(int a, int b) { return a/b; }

int main() {
	  cout << mul(sub(4,3), sub(2,1)) << " ";
	  cout << add(mul(1,2), div(3,4)) << " ";
	  cout << add(div(4,3), mul(2,1)) << " ";
	  cout << sub(add(1,2), sub(3,4)) << " ";
	  cout << endl;
}
