#include <iostream>
using namespace std;

void f(int c, int b, int a);

int main() {
      int a=1, b=2, c=3;
      f(b, a, c);
      cout << endl;
}

void f(int b, int c, int a) {
      cout << a << b << c;
}
