#include <iostream>
#include <cmath>
#include <stdint.h>

int main()
   {

   const double R=8000;        // sample rate (samples/s)
   const double C=261.625565;  // frequency of middle-C (Hz)
   const double F=R/256;       // 8-bit bytebeat frequency (Hz)
   const double V=127;         // volume constant

   for (int t=0; ; t++)
      {
      uint8_t temp = (sin(t*2*M_PI/R*C)+1)*V;   // pure middle C sine wave
   // uint8_t temp = t/F*C;                     // middle C saw wave (bytebeat style)
   // uint8_t temp = (t*5&t>>7)|(t*3&t>>10);    // viznut bytebeat composition
   // uint8_t temp = (t*7&t>>8)|(t*5&t*2>>11);  // my mod
      std::cout<<temp;
      }

}
