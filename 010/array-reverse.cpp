#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

void swap(int &a, int &b) {
     int c = a;
         a = b;
         b = c;
}

void printArray(int a[], int N) {
    int i;
    for (i=0; i<N; i++)
    	cout << a[i] << " ";
    cout << endl;
}

int main() {
    int i, j, N=9;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << string(80, '\n');
    printArray(a, N);
    sleep(2);
    for (i=0; i<N/2; i++) {
        cout << string(80, '\n');
	swap(a[i], a[N-i-1]);
	printArray(a, N);
	for (j=0; j<N; j++) {
		if (j == i || j == N-i-1) cout << "^ ";
		else                      cout << "  ";
	}
	cout << endl << std::flush;
	usleep(750000);
    }
}
