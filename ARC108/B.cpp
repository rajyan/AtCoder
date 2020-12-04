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

	int N;
	cin >> N;
	string s;
	cin >> s;

	deque<char> dq;
	int ans = N, f = 0, fo = 0;
	for (int i = 0; i < N; i++) {
		if (s[i] == 'f' || s[i] == 'o') dq.emplace_back(s[i]);
		else if (s[i] == 'x') {
			if (dq.size() >= 2 && dq.back() == 'o' && (dq.pop_back(), dq.back() == 'f')) {
				dq.pop_back();
				ans -= 3;
			}
			else dq.clear();
		}
		else dq.clear();
	}

	cout << ans << "\n";

	return 0;
}
