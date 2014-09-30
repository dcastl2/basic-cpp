#include <iostream>
using namespace std;

int foo (int a, int b) {
        cout << b;
        return  a;
}

int main() {
       foo(1, foo(2, foo(3, 4))); cout << endl;
       foo(foo(foo(1, 2), 3), 4); cout << endl;
       return 0;
}
