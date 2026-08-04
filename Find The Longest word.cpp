#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "I love competitive programming";

    stringstream ss(str);
    string word;
    string longest = "";

    while (ss >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    cout << longest;

    return 0;
}
