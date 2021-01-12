#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

template<class T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
    for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
    return os;
}

#ifdef _DEBUG
template<class T>
void dump(const char *str, T &&h) { cerr << str << " = " << h << "\n"; };
template<class Head, class... Tail>
void dump(const char *str, Head &&h, Tail &&... t) {
    while (*str != ',') cerr << *str++;
    cerr << " = " << h << "\n";
    dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
}
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

int main() {

    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    cout << setw(2) << setfill('0');
    if (N <= 5000) {
        cout << N / 100 << "\n";
    }
    else if (N <= 30000) {
        cout << N / 1000 + 50 << "\n";
    }
    else if (N <= 70000) {
        cout << (N / 1000 - 30) / 5 + 80 << "\n";
    }
    else {
        cout << 89 << "\n";
    }

    return 0;
}