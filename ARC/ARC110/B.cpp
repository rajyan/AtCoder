
#ifdef _DEBUG
#include "../../../library/src/debug_template.hpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <functional>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

template<typename T, typename = void_t<>>
struct is_iterable: false_type {};
template<typename T>
struct is_iterable<T, void_t<decltype(declval<T>().begin(), declval<T>().end())>>: negation<is_same<T, string>> {};

template<class T>
enable_if_t<!is_iterable<T>::value> print(const T &s) {
    cout << s << '\n';
    exit(0);
}

template<typename T>
enable_if_t<is_iterable<T>::value> print(const T &r) {
    for (const auto &i : r) cout << i << " \n"[&i == &*(--r.end())];
    exit(0);
}

int main() {
    const lint base = 10000000000LL;
    int n;
    string t;
    cin >> n >> t;

    if (n == 1) {
        print(((t[0] == '1') + 1) * base);
    }

    if (n <= 2) {
        if (t == "00") print(0);
        else if (t == "01") print(base - 1);
        else print(base);
    }

    for (int i = 0; i < (int)t.size(); i++) {
        if (t[i] != t[i % 3]) print(0);
    }

    string s = t.substr(0, 3);
    if (s == "110") print(base - (n - 1) / 3);
    else if (s == "101") print(base - n / 3);
    else if (s == "011") print(base - (n + 1) / 3);
    else print(0);
}
