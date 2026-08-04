#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {

    string str = "apple banana apple mango banana apple";

    stringstream ss(str);

    string word;

    map<string, int> mp;

    while (ss >> word) {
        mp[word]++;
    }

    for (auto x : mp) {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}
