#include <iostream>
using namespace std;

int main() {
    int i;
    int prod;
    cout << "Enter product: ";
    cin  >> prod;
    for (i=1; prod>1; i++) {
        prod /= i;
    }
    cout << "n must have been " << i-1;
    cout << "." << endl;
    return 0;
}
