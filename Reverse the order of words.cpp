#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {

    string str = "I love C++ programming";

    stringstream ss(str);

    string word;

    vector<string> v;

    while (ss >> word) {
        v.push_back(word);
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }

    return 0;
}

