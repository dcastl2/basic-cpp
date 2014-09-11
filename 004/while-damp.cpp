#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int     n    =   1;
    float   f;
    float   x    =   0;
    double  sum  =   1;
    double  avg  =   1;
    while  (avg  >  .1) {
        x   += .01;
        f    = exp(-x) * sin(x);
        sum += abs(f);
        avg  = sum / n++;
        cout << x << ": " << f << endl;
        
    }
    cout << "x is " << x << endl;
    return 0;
}
