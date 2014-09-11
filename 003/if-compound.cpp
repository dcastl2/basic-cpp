#include <iostream>
using namespace std;

int main() {
  bool rain;
  bool sunshine;
  cout << "Is it raining? (0/1): ";
  cin  >> rain;
  cout << "Is the sun shining? (0/1): ";
  cin  >> sunshine;
  if (rain && sunshine) 
    cout << "So it's a sunshower." << endl;
    cout << "Have a nice day." << endl;
  
  
}
