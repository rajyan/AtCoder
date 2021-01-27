//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
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
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template<int Modulo>
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
//using mint3 = Mint<3>;
//
//template <class T>
//class CuSum {
//private:
//	vector<T> cusum;
//
//public:
//	CuSum(vector<T> const& vec) : cusum(vec.size() + 1) {
//		for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
//	}
//	CuSum(const int N) : cusum(N + 1) {}
//	void add(const int i, const T& x) { cusum[i + 1] += x; }
//	void build() { for (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }
//
//	// partial sum of 0-indexed [l, r)
//	T operator()(int l, int r) {
//		if (r < l || r < 0) {
//			assert(0);
//			return T(0);
//		}
//		else return cusum[r] - cusum[l];
//	}
//	// 0-indexed
//	const T& operator[](int i) { return cusum[i + 1]; }
//	T back() { return cusum.back(); }
//};
//
//int main() {
//
//	string s, t;
//	cin >> s >> t;
//
//	vector<mint3> vs, vt;
//	for (const auto& c : s) vs.emplace_back(c - 1);
//	for (const auto& c : t) vt.emplace_back(c - 1);
//	DMP(vs, vt);
//
//	CuSum cus(vs), cut(vt);
//	int q;
//	cin >> q;
//	for (int i = 0; i < q; i++) {
//		int a, b, c, d;
//		cin >> a >> b >> c >> d;
//		a--, c--;
//		if (cus(a, b) == cut(c, d)) cout << "YES" << "\n";
//		else cout << "NO" << "\n";
//	}
//
//	return 0;
//}
