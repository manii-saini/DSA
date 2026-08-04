#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "I love C++ programming";

    stringstream ss(str);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    cout << "Total Words = " << count;

    return 0;
}
