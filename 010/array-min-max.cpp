#include <iostream>
#include <iomanip>
using namespace std;

#define N 10

int min(int v[]) {
	int i, min=v[0];
	for (i=0; i<N; i++)
		if (min > v[i])
		    min = v[i];
	return min;
}

int argmin(int v[]) {
	int i, min=v[0], argmin=0;
	for (i=0; i<N; i++)
		if (min > v[i]) {
		    min = v[i];
		    argmin = i;
		}
	return argmin;
}

int max(int v[]) {
	int i, max=v[0];
	for (i=0; i<N; i++)
		if (max < v[i])
		    max = v[i];
	return max;
}

int argmax(int v[]) {
	int i, min=v[0], argmin=0;
	for (i=0; i<N; i++)
		if (min > v[i]) {
		    min = v[i];
		    argmin = i;
		}
	return argmin;
}

int main() {
	int v[N] = {5, 8, 3, 10, 1, 7, 2, 4, 9, 6};
	cout << "Minimum: " << setw(2) <<    min(v) << endl;
	cout << "Arg min: " << setw(2) << argmin(v) << endl;
	cout << "Maximum: " << setw(2) <<    max(v) << endl;
	cout << "Arg max: " << setw(2) << argmax(v) << endl;
	return 0;
}
