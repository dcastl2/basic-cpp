#include <iostream>
using namespace std;

int main() {
  bool   a;
  int    i;
  cin >> a;
  if (a) 
    for (i=1; i<10; i+=2)
      cout << i << " ";
  else
    for (i=0; i<10; i+=2)
      cout << i << " ";
  cout << endl;
  return 0;
}
