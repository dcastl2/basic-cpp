#include <iostream>
using namespace std;

#define N 10

int main() {
	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	//a[7] = 6;
	for (i=0; i<N; i++) {
		a[i] = a[i]*a[i];
		cout << a[i] << endl;
	}
	cout << endl;
	return 0;
}
