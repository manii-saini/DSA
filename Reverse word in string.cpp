#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string str = "Hello World Welcome";

    stringstream ss(str);
    string word;

    while (ss >> word) {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }

    return 0;
}
