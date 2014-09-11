#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i,  n;
    int s = 0;
    cin >>  n;
    for (i=0; i<n; i++) {
        s += (pow(2, i) * pow(-1, i));
    }
    cout << s << endl;
}
