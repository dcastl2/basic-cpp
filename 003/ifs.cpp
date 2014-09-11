#include <iostream>
using namespace std;

int main() {
    int rain = 1;
    if (rain) {
        cout << "It is raining." << endl;
    }
    rain = 0;
    if (!rain) {
        cout << "it is not raining." << endl;
    }
    return 0;
}
