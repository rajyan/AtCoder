#ifdef _DEBUG
#include "../../library/library/debug_template.cpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
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

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

int main() {

	string s;
	cin >> s;

	if (s.size() <= 2) {
		for (int i = 0; i < 100; i += 8) {
			if (to_string(i) == s) {
				cout << "Yes" << "\n";
				return 0;
			}
			swap(s.front(), s.back());
			if (to_string(i) == s) {
				cout << "Yes" << "\n";
				return 0;
			}
		}
		cout << "No" << "\n";
		return 0;
	}

	map<int, int> mp;
	for (const auto& e : s) {
		mp[e - '0']++;
	}

	for (int i = 104; i < 1000; i += 8) {

		int t = i;
		//DMP(t);
		map<int, int> tmp;
		while (t) {
			tmp[t % 10]++;
			t /= 10;
		}
		//DMP(tmp);

		bool dividable = true;
		for (const auto& [key, val] : tmp) {
			if (mp[key] < val) dividable = false;
		}

		if (dividable) { 
			cout << "Yes" << "\n";
			return 0;
		}
	}

	cout << "No" << "\n";

	return 0;
}
