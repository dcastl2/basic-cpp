#include <iostream>
using namespace std;

char about(char c, int i) {
	  return c += i;
}

int main() {
  cout << about('T', -1);
  cout << about('A',  4);
  cout << about('B',  1);
  cout << about('U', -3);
  cout << about('L', -7);
  cout << about('A', 19);
  cout << endl;
}

