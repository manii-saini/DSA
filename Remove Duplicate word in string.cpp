#include <iostream>
#include <sstream>
#include <set>
using namespace std;

int main() {

    string str = "apple banana apple mango banana apple";

    stringstream ss(str);
    string word;

    set<string> st;

    while (ss >> word) {
        st.insert(word);
    }

    for (auto x : st) {
        cout << x << " ";
    }

    return 0;
}
