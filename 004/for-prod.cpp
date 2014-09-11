#include <iostream>
using namespace std;

int main() {
    int i;
    int n;
    cout << "Enter n: ";
    cin  >> n;
    int prod =  1;
    for (i=1; i<=n; i++) {
        prod *= i;
    }
    cout << "The product from 1 to " << n;
    cout << " is " << prod << "." << endl;
    return 0;
}
