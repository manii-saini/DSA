#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    return a.length() < b.length();
}

int main() {

    string str = "I love competitive programming";

    stringstream ss(str);

    string word;

    vector<string> v;

    while (ss >> word) {
        v.push_back(word);
    }

    sort(v.begin(), v.end(), cmp);

    for (string x : v)
        cout << x << " ";

    return 0;
}
