//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
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
//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
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
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> Ap, Am;
//	for (int i = 0; i < N; i++) {
//		int a;
//		cin >> a;
//		if (a > 0) Ap.emplace_back(a);
//		else if (a < 0) Am.emplace_back(a);
//	}
//
//	if (Ap.size() + Am.size() < K) {
//		cout << 0 << "\n";
//		return 0;
//	}
//
//	if (K == N) {
//		mint ans = 1;
//		for (const auto& e : Ap) ans *= e;
//		for (const auto& e : Am) ans *= e;
//		cout << ans << "\n";
//		return 0;
//	}
//
//	if (Ap.size() == 0 && (K & 1)) {
//
//		if (Am.size() != N) {
//			cout << 0 << "\n";
//			return 0;
//		}
//
//		sort(Am.begin(), Am.end(), greater<>());
//		mint ans = 1;
//		for (int i = 0; i < K; i++) {
//			ans *= Am[i];
//		}
//		cout << ans << "\n";
//		return 0;
//	}
//
//	sort(Ap.begin(), Ap.end(), greater<>());
//	sort(Am.begin(), Am.end());
//
//	mint ans = 1;
//	int pidx = 0, midx = 0;
//	if (K & 1) {
//		ans *= Ap[pidx++];
//		K--;
//	}
//
//	for (int i = 0; i < K; i += 2) {
//
//		lint p, m;
//		if (pidx + 1 < Ap.size()) {
//			p = 1LL * Ap[pidx] * Ap[pidx + 1];
//		}
//		else p = 0;
//
//		if (midx + 1 < Am.size()) {
//			m = 1LL * Am[midx] * Am[midx + 1];
//		}
//		else m = 0;
//
//		if (p > m) {
//			ans *= p;
//			pidx += 2;
//		}
//		else {
//			ans *= m;
//			midx += 2;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//
