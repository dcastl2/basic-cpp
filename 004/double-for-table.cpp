#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i, j;
    for (j=1; j<=10; j++) {
        for (i=1; i<=10; i++) {
           cout << setw(4) << i*j;
      }
      cout << endl;
    }
    return 0;
}
