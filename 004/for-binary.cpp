#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i   =  7;
    int n;
    cout << "Enter number [0-255]: ";
    cin  >> n;
    int d;
    for (i; i>-1; i--) {
        d = n - pow(2, i);
        if (d >= 0) {
            n = d;
            cout << "1";
        } else {
            cout << "0";
        }
    }
    cout << endl;
    return 0;
}
