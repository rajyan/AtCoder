#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1111111111;
constexpr lint LINF = 1LL << 60;

template <class T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
	return os;
}

#ifdef _DEBUG
template <class T>
void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
template <class Head, class... Tail>
void dump(const char* str, Head &&h, Tail &&... t) {
	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
}
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	map<int, int> mp_even, mp_odd;
	for (int i = 0; i < n; i++) {
		if (i & 1) mp_odd[v[i]]++;
		else mp_even[v[i]]++;
	}

	auto comp = [](auto &l, auto &r) {return l.second > r.second; };
	vector<pair<int, int>> top2_odd(2), top2_even(2);
	partial_sort_copy(mp_odd.begin(), mp_odd.end(), top2_odd.begin(), top2_odd.end(), comp);
	partial_sort_copy(mp_even.begin(), mp_even.end(), top2_even.begin(), top2_even.end(), comp);

	if (top2_odd[0].first != top2_even[0].first) cout << n - (top2_odd[0].second + top2_even[0].second) << "\n";
	else cout << n - max(top2_odd[0].second + top2_even[1].second, top2_odd[1].second + top2_even[0].second) << "\n";

	return 0;
}