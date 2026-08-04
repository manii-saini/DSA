#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "Hello World Welcome";

    stringstream ss(str);
    string word;

    while (ss >> word) {
        cout << word << endl;
    }

    return 0;
}
