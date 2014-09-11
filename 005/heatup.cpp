#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <cmath>
using namespace std;

int main() {
  float i,j,t,n=9,T=2;
  for (t=0; t<=T; t+=.01) {
      cout << string(80, '\n');
      for (j=1; j<=n; j++) {
          for (i=1; i<=n; i++) {
              cout << setw(7);
          cout << (int)(
    		    (100         
    		   - pow(i-5,2)
    		   - pow(j-5,2)
    		    ) * t / 2
    		   );
          }
      cout << endl;
      }
      cout << endl;
      usleep(40000);
  }
}
