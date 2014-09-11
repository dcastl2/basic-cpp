#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int i, j;
  for (i=1; i<=10; i++) {
    for (j=1; j<=10; j++) 
      if (i % j == 0)
        cout << setw(4) << i/j << " ";
      else
        cout << setw(4) << "*" << " ";
    cout << endl;
  }
  return 0;
}
