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

	int N, A, B, C;
	cin >> N >> A >> B >> C;

	vector<string> s(N);
	for (int i = 0; i < N; i++) cin >> s[i];
	s.emplace_back("**");

	string ans;
	for (int i = 0; i < N; i++) {
		if (s[i] == "AC") {
			if (A == C) {
				if (s[i + 1] == "BC") {
					A--, C++;
					ans += 'C';
				}
				else {
					A++, C--;
					ans += 'A';
				}
			}
			else if(A >= C) {
				A--, C++;
				ans += 'C';
			}
			else {
				A++, C--;
				ans += 'A';
			}
		}
		else if (s[i] == "AB") {
			if (A == B) {
				if (s[i + 1] == "BC") {
					A--, B++;
					ans += 'B';
				}
				else {
					A++, B--;
					ans += 'A';
				}
			}
			else if(A > B) {
				A--, B++;
				ans += 'B';
			}
			else {
				A++, B--;
				ans += 'A';
			}
		}
		else {
			if (B == C) {
				if (s[i + 1] == "AC") {
					C++, B--;
					ans += 'C';
				}
				else {
					C--, B++;
					ans += 'B';
				}
			}
			else if(B > C) {
				B--, C++;
				ans += 'C';
			}
			else {
				B++, C--;
				ans += 'B';
			}
		}

		if (A < 0 || B < 0 || C < 0) {
			cout << "No" << "\n";
			return 0;
		}

	}

	cout << "Yes" << "\n";
	for (const auto &e : ans) cout << e << "\n";

	return 0;
}