#include <iostream>
using namespace std;

int main() {
    int i, S;
    cout << "Enter sum: ";
    cin  >> S;
    for (i=1; S>0; i++) {
        S -= i;
    }
    cout << "n must have been " << i-1; 
    cout << "." << endl;
    return 0;
}
