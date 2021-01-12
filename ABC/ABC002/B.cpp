#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (const auto &c:s) if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')cout << c;
    cout << endl;
}