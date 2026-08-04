#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string str = "10 20 hello 30 world 40";

    stringstream ss(str);

    string token;

    int sum = 0;

    while (ss >> token) {

        if (isdigit(token[0])) {
            sum += stoi(token);
        }
    }

    cout << sum;

    return 0;
}
