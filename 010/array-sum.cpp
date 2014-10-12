#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define N 10

int sum(int a[]) {
	int i, sum=0;
	for (i=0; i<N; i++)
	       sum += a[i];
	return sum;
}

int main() {
	int A[N] = {5, 8, 3, 10, 1, 7, 2, 4, 9, 6};
	cout << "Sum:           " << setw(6) <<     sum (A)     << endl;
	return 0;
}
