#include <iostream>
using namespace std;

int main() {
    int i;
    int n;
    cout << "Enter n: ";
    cin  >> n;
    int sum = 0;
    for (i=1; i<=n; i++) {
        sum += i;
    }
    cout << "The sum is " << sum << "." << endl;
    return 0;
}
