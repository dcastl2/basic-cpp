#include <iostream>
#include <string>
#include "unistd.h"
using namespace std;

/**
 * Types out string to console.
 */
void typeout(string str) {
    int i;
    unsigned int naptime = 30000;     //!< Time delay between characters
    for (i=0; i<str.size(); i++) {
        cout << str[i] << std::flush;
        usleep(naptime);
    }
    usleep(naptime);
}

int main() {
    string hello = "Hello, world!";
    typeout(hello);
    cout << endl;
    return 0;
}
