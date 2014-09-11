#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int i;
    for (i=1; i<=10; i++) {
        cout << setw(2) << i          << ": ";
        cout << setw(4) << pow(i,2.0) << endl;
    }
    return 0;
}
