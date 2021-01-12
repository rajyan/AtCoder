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

template <class T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
	return os;
}

template <class T>
ostream &operator<<(ostream &os, const set<T> &st) {
	for (const auto &e : st) os << e << " ";
	return os;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
	os << "(" << p.first << "," << p.second << ")";
	return os;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
	for (const auto &e : mp) os << e << " ";
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

	int N;
	cin >> N;

	vector<pair<string, string>> rain(N);
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;

		string beg, end;
		beg = s.substr(0, 4);
		end = s.substr(5);
		DMP(beg, end);

		if ('0' <= beg[3] && beg[3] < '5') beg[3] = '0';
		else beg[3] = '5';

		if ('0' < end[3] && end[3] <= '5') end[3] = '5';
		else {

			if (end[3] != '0') {
				end[3] = '0';
				end[2] += 1;
			}

			if (end[2] == '6') {
				end[2] = '0';
				string hour = to_string(stoi(end.substr(0, 2)) + 1);
				if (hour.size() == 1) hour = '0' + hour;
				end = hour + end.substr(2);
			}

		}

		DMP(beg, end);
		rain[i] = { beg,end };
	}

	sort(rain.begin(), rain.end());
	DMP(rain);

	vector<string> ans;
	ans.reserve(N);
	auto tmp = rain.front();
	rain.emplace_back("9999", "9999");
	for (int i = 0; i <= N; i++) {

		if (tmp.second >= rain[i].first) {
			tmp.second = max(rain[i].second, tmp.second);
		}
		else {
			ans.emplace_back(tmp.first + '-' + tmp.second);
			tmp = rain[i];
		}

	}

	DMP(rain, ans);

	for (const auto &e : ans) cout << e << "\n";

	return 0;
}