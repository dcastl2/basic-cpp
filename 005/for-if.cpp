#include <iostream>
using namespace std;

int main() {
  bool   a;
  int    i;
  cout << "Enter a 0 or 1: ";
  cin  >> a;
  for (i=0; i<20; i++)
    if (i % 3 == a)
      cout << i << " ";
  cout << endl;
  return 0;
}
