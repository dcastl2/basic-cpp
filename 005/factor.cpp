#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int i, n;
    cin >> n;
    for (i=1; i<=n; i++) 
        if (n % i == 0) 
            cout << i << " ";
    cout << endl;
    return 0;
}