//#ifdef _DEBUG
//#include "../../../library/src/debug_template.cpp"
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
//int main() {
//
//	int A, B, C;
//	cin >> A >> B >> C;
//
//	mint ans = mint(1) * (A + 1) * A / 2 * (B + 1) * B / 2 * (C + 1) * C / 2;
//	cout << ans << "\n";
//
//	return 0;
//}
