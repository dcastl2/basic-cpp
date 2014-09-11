#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "Please enter a score: ";
	cin  >> score;
	     if (score >= 100) cout << "A+\nVery good job!";
	else if (score >= 90)  cout << 'A';
	else if (score >= 80)  cout << 'B';
	else if (score >= 70)  cout << 'C';
	else if (score >= 60)  cout << 'D';
	else                   cout << 'F';
	cout << endl;
	return 0;
}
