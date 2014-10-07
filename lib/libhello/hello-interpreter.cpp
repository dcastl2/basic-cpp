#include <iostream>
#include <cstdlib>
#include "hello.h"
using namespace std;
using namespace hi;

int main() {
   int n;
   string s, cmd;
   do {
       cout << "> ";
       cin  >> cmd;
            if (cmd  == "hello") {
                cin  >> s;
                cout << hello(s);
       }
       else if (cmd  == "count") {
                cin  >> n;
                count(n);
       }
       else if (cmd  == "q") {
	        exit(1);
       }
       else {
                cout << "`" << cmd << "'" << " not supported.";
       }
   } while(true);
   return 0;
}
