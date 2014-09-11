#include <iostream>
using namespace std;

int main() {
    int i, j;
    int s = 220;
    cout << "Enter sum: ";
    cin  >> s;
    for (j=1; s>0; j++) {
      for (i=1; i<=j; i++) {
        s -= i;
      }
    }
    cout << "The double-sum is to " << j-1 << "." << endl;
    return 0;
}
