#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string str = "I love competitive programming language";

    stringstream ss(str);

    string word;
    string first = "", second = "";

    while (ss >> word) {

        if (word.length() > first.length()) {
            second = first;
            first = word;
        }
        else if (word.length() > second.length() && word != first) {
            second = word;
        }
    }

    cout << second;

    return 0;
}
