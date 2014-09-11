#include <iostream>
using namespace std;

int main() {
	unsigned int max = ~0;                        // Negates all 0 bits so they become 1, 
	cout << "["                     << endl;
	cout << " " <<  max      << "," << endl;      // thus giving max integer value.
	cout << " " << (max & 1) << "," << endl;      // This gives 1, the only bit in common.
	cout << " " << (max ^ 1)        << endl;      // This is max integer value - 1.
	cout << "]"                     << endl;
}

