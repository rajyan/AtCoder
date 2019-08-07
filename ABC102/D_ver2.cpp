#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

const int MOD = 1000000007;
using namespace std;
typedef long long lint;
const lint INF = (1LL << 62);

template <class T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
	for (int i = 0; i < vec.size(); i++) {
		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
	}
	return os;
}

#ifdef _DEBUG
template <class Head>
void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
template <class Head, class... Tail>
void dump(const char* str, Head &&h, Tail &&... t) {
	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
	dump(str + 1, t...);
}
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

template <class T>
class CuSum {
private:
	vector<T> cusum;
public:
	// Constructors 
	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
		for (int i = 0; i < vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
		DMP(cusum);
	}
	CuSum(int N) : cusum(N + 1) {}
	void add(int i, T x) { cusum[i + 1] += x; }
	void init() { for (int i = 0; i < cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }

	// partial sum of 0-indexed [l, r)
	T operator()(int l, int r) {
		if (r < l || r < 0) {
			//assert(0);
			return T(0);
		}
		else return cusum[r] - cusum[l];
	}
	// 0-indexed
	T operator[](int i) { return cusum[i + 1]; }
	T back() { return cusum.back(); }
	auto begin() { return cusum.begin(); }
	auto end() { return cusum.end(); }
};

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<lint> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	CuSum<lint> sufA(A);

	auto BiSearch = [&](int l, int r) {
		return partition_point(sufA.begin() + l, sufA.begin() + r,
			[&](int n) {DMP(n); return (sufA[r - 1] - n) - (n - sufA[l]) < 0; }) - sufA.begin() - 1;
	};

	lint ans = INF;
	for (int center = 2; center < N; center++) {

		auto cut1 = BiSearch(0, center);
		DMP(cut1);
		auto cut2 = BiSearch(center, N);
		DMP(cut2);

		vector<int> d{ -1,0 };
		for (const auto &e1 : d) {
			for (const auto &e2 : d) {
				auto tmp = minmax({ sufA(0, cut1 + e1), sufA(cut1 + e1, center), sufA(center, cut2 + e2), sufA(cut2 + e2, N) });
				ans = min(ans, tmp.second - tmp.first);
			}
		}
	}

	cout << ans << "\n";

	return 0;
}