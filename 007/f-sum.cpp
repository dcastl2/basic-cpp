#include <iostream>
using namespace std;

int sum(int a, int b, int step) {
	int i, sum=0;
	for (i=a; i<=b; i+=step)
		sum += i;
	return sum;
}

int prod(int a, int b, int step) {
	int i, prod=1;
	for (i=a; i<=b; i+=step)
		prod *= i;
	return prod;
}

int main() {
	cout << "Sum  1 to 10 i: " << sum(1,10,1) << endl;
	cout << "Prod 1 to  5 i: " << prod(1,5,1) << endl;
	return 0;
}
