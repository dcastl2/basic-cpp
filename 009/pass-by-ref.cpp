#include <iostream>
using namespace std;

void swap(char &a, char &b) {
	char c = a;
	     a = b;
	     b = c;
}

int main() {
	string word = "dormitory";
	swap(word[1], word[4]);
	swap(word[3], word[5]);
	swap(word[4], word[8]);
	swap(word[5], word[7]);
	swap(word[7], word[8]);
	cout << word << endl;
}
