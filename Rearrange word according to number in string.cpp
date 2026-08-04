#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {

    string str = "to2 Welcome1 learning4 C++5 ChatGPT3";

    stringstream ss(str);
    string word;

    vector<string> arr(10);

    while (ss >> word) {

        string temp = "";
        int pos = 0;

        for (char ch : word) {

            if (isdigit(ch))
                pos = ch - '0';
            else
                temp += ch;
        }

        arr[pos] = temp;
    }

    for (int i = 1; i < arr.size(); i++) {

        if (arr[i] != "")
            cout << arr[i] << " ";
    }

    return 0;
}
