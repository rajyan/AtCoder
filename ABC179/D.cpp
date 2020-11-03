//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 998244353, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template<int Modulo = MOD>
//struct Mint {
//
//	lint val;
//	constexpr Mint(lint v = 0) noexcept : val(v% Modulo) { if (val < 0) val += Modulo; }
//
//	constexpr Mint& operator+=(const Mint& r) noexcept {
//		val += r.val;
//		if (val >= Modulo) val -= Modulo;
//		return *this;
//	}
//	constexpr Mint& operator-=(const Mint& r) noexcept {
//		val -= r.val;
//		if (val < 0) val += Modulo;
//		return *this;
//	}
//	constexpr Mint& operator*=(const Mint& r) noexcept {
//		val = val * r.val % Modulo;
//		return *this;
//	}
//	constexpr Mint& operator/=(const Mint& r) noexcept {
//		lint a = r.val, b = Modulo, u = 1, v = 0;
//		while (b) {
//			lint t = a / b;
//			a -= t * b; swap(a, b);
//			u -= t * v; swap(u, v);
//		}
//		val = val * u % Modulo;
//		if (val < 0) val += Modulo;
//		return *this;
//	}
//
//	constexpr Mint operator+(const Mint& r) const noexcept { return Mint(*this) += r; }
//	constexpr Mint operator-(const Mint& r) const noexcept { return Mint(*this) -= r; }
//	constexpr Mint operator*(const Mint& r) const noexcept { return Mint(*this) *= r; }
//	constexpr Mint operator/(const Mint& r) const noexcept { return Mint(*this) /= r; }
//
//	constexpr Mint operator-() const noexcept { return val ? Modulo - val : 0; }
//
//	constexpr bool operator==(const Mint& r) const noexcept { return val == r.val; }
//	constexpr bool operator!=(const Mint& r) const noexcept { return !((*this) == r); }
//	constexpr bool operator< (const Mint& r) const noexcept { return val < r.val; }
//
//	friend ostream& operator << (ostream& os, const Mint<Modulo>& x) noexcept { return os << x.val; }
//	friend istream& operator >> (istream& is, Mint<Modulo>& x) noexcept {
//		lint tmp; is >> tmp;
//		x = Mint(tmp);
//		return is;
//	}
//
//	constexpr Mint pow(lint n) const noexcept {
//		Mint res = 1, tmp = val;
//		while (n > 0) {
//			if (n & 1) res *= tmp;
//			tmp *= tmp;
//			n >>= 1;
//		}
//		return res;
//	}
//};
//
//using mint = Mint<>;
//
//template<class T>
//class FenwickTree {
//private:
//	int n;
//	vector<T> bit;
//public:
//	FenwickTree(int sz, T&& x = T(0)) : n(sz), bit(n + 1) {
//		for (int i = 0; i < n; i++) add(i, x);
//	}
//
//	T sum(int k) const {
//		T res = 0;
//		for (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];
//		return res;
//	}
//	T sum(int l, int r) const { return sum(r) - sum(l); }
//
//	void add(int k, const T& x) {
//		for (; k < n; k |= k + 1) bit[k] += x;
//	}
//	void set(int k, const T& x) { add(k, x - sum(k, k + 1)); }
//};
//
//int main() {
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> L(K), R(K);
//	for (int i = 0; i < K; i++) cin >> L[i] >> R[i];
//	for (int i = 0; i < K; i++) R[i]++;
//
//	FenwickTree<mint> dp(2 * N);
//	dp.add(0, 1);
//	for (int n = 0; n < N; n++) {
//		mint now = dp.sum(n + 1);
//		for (int k = 0; k < K; k++) {
//			dp.add(n + L[k], now);
//			dp.add(n + R[k], -now);
//		}
//	}
//
//	cout << dp.sum(N - 1, N) << "\n";
//
//	return 0;
//}
