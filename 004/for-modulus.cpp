#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, n=10, s=1001;
    for (i=n; i>0; i--) {
        s %= (int) pow(2.0, i);
    }
    cout << s << endl;
}
