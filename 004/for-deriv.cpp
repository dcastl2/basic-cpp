#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float x, f1, f2, d;
    for (x=-2; x<=2; x+=.1) {
        f2 = pow(x,3.0);
        d  = f2 - f1;
        f1 = f2;
        cout << setw(10) << setprecision(2) << x   << " ";
        cout << setw(10) << setprecision(4) << f1  << " ";
        cout << setw(10) << setprecision(4) << d   << endl;
    }
}
