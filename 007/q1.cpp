#include <iostream>
using namespace std;
void O()    { cout << "O";      }
void G()    { cout << "G"; O(); }
void R()    { cout << "R"; G(); }
void E()    { cout << "E"; R(); }
int  main() { E();
	      cout << endl;
	      return 0; }
