#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    for (long long t = 3, i = 1; i < 39; i++, t *= 3) {
        for (long long f = 5, j = 1; j < 27; j++, f *= 5) {
            if (t + f == n) {
                cout << i << ' ' << j << '\n';
                return 0;
            }
        }
    }
    cout << "-1\n";
}