#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float x;
    float f;
    for (x=0; x<=1; x+=.01) {
        f = pow(x,2.0);
        cout << setw(4) << setprecision(2) << x << ": ";
        cout << setw(6) << setprecision(4) << f << endl;
    }
    return 0;
}
