#include <iostream>
using namespace std;

int main() {
    int i, j;
    int sum = 0;
    for (j=1; j<=10; j++) {
      for (i=1; i<=j; i++) {
        sum += i;
      }
    }
    cout << "The double-sum from 1 to 10 is " << sum << "." << endl;
    return 0;
}
