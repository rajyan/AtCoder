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

lint gcd(lint a, lint b) { return b ? gcd(b, a%b) : a; }

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, Q;
	cin >> N >> Q;

	vector<int> A(N), S(Q);
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < Q; i++) cin >> S[i];

	vector<int> gcdA(N + 1);
	for (int i = 0; i < N; i++) gcdA[i + 1] = gcd(gcdA[i], A[i]);


	auto judge = [&](auto idx, auto key) {
		return gcd(gcdA[idx], S[key]) == 1;
	};

	auto binary_search = [&](auto f, int key) {

		auto ng = 0;
		auto ok = N;

		while (abs(ok - ng) > 1) {
			auto mid = (ok + ng) / 2;

			if (f(mid, key)) ok = mid;
			else ng = mid;
		}

		return ok;
	};

	for (int i = 0; i < Q; i++) {
		int ans = gcd(gcdA.back(), S[i]);
		if (ans != 1) cout << ans << "\n";
		else {
			cout << binary_search(judge, i) << endl;
		}
	}

	return 0;
}