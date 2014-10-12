#include <iostream>
#include <iomanip>
using namespace std;

int dot (int u[], int v[], int n) {
    int sum = 0;
    for (int i=0; i<n; i++) 
        sum += u[i]*v[i];
    return sum;
}

int main() {
    int n   = 5;
    int u[] = {1, 2, 3, 4, 5};
    int v[] = {5,-4, 3,-2, 1};
    cout << dot(u, v, n) << endl;
    return 0;
}
