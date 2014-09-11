#include <iostream>
using namespace std;

int main() {
  char grade;
  int  baseline;
  cout << "Please enter a letter grade: ";
  cin  >> grade;
  switch (grade) {
    case 'A':
      baseline = 90;
      break;
    case 'B':
      baseline = 80;
      break;
    case 'C':
      baseline = 70;
      break;
    case 'D':
      baseline = 60;
      break;
    case 'F':
      baseline = 50;
      break;
    default:
      cout << "Next time, please enter A, B, C, D, or F." << endl;
      break;
  }
  float percent = baseline/100.0;
  int   curved  = percent*percent*100;
  cout << "The curved baseline is " << curved << "." << endl;
  return 0;
}
