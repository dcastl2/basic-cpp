#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int i, j;
    bool prime;
    for (j=2; j<=100; j++) {
        prime = 1;
        for (i=2; i<=floor(sqrt(j)); i++)
            if (j%i == 0) {
                prime = 0;
                break;
            }
        if (prime == 1)
            cout << j << " ";
    }
    cout << endl;
    return 0;
}
