#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "ab12 cd34 ef56";

    stringstream ss(str);
    string word;

    while (ss >> word) {

        for (char ch : word) {
            if (!isdigit(ch))
                cout << ch;
        }

        cout << " ";
    }

    return 0;
}
