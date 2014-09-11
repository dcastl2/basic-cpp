#include <iostream>
using namespace std;

int main() {
  bool rain;
  cout << "Enter value (0/1): ";
  cin  >> rain;
  if (rain) {
    cout << "It is raining."     << endl;
  } else {
    cout << "It is not raining." << endl;
  }
}
