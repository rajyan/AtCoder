//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
//constexpr lint LINF = 1LL << 60;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
//	return os;
//}
//
//#ifdef _DEBUG
//template <class T>
//void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//template<int Modulo = MOD> struct Mint {
//	lint val;
//	constexpr Mint(lint v = 0) noexcept : val(v % Modulo) {
//		if (val < 0) v += Modulo;
//	}
//	constexpr int getmod() { return Modulo; }
//	constexpr Mint operator - () const noexcept { return val ? Modulo - val : 0; }
//	constexpr Mint operator + (const Mint& r) const noexcept { return Mint(*this) += r; }
//	constexpr Mint operator - (const Mint& r) const noexcept { return Mint(*this) -= r; }
//	constexpr Mint operator * (const Mint& r) const noexcept { return Mint(*this) *= r; }
//	constexpr Mint operator / (const Mint& r) const noexcept { return Mint(*this) /= r; }
//	constexpr Mint& operator += (const Mint& r) noexcept {
//		val += r.val;
//		if (val >= Modulo) val -= Modulo;
//		return *this;
//	}
//	constexpr Mint& operator -= (const Mint& r) noexcept {
//		val -= r.val;
//		if (val < 0) val += Modulo;
//		return *this;
//	}
//	constexpr Mint& operator *= (const Mint& r) noexcept {
//		val = val * r.val % Modulo;
//		return *this;
//	}
//	constexpr Mint& operator /= (const Mint& r) noexcept {
//		lint a = r.val, b = Modulo, u = 1, v = 0;
//		while (b) {
//			lint t = a / b;
//			a -= a / b * b; swap(a, b);
//			u -= a / b * v; swap(u, v);
//		}
//		val = val * u % Modulo;
//		if (val < 0) val += Modulo;
//		return *this;
//	}
//	constexpr bool operator == (const Mint& r) const noexcept {
//		return this->val == r.val;
//	}
//	constexpr bool operator != (const Mint& r) const noexcept {
//		return this->val != r.val;
//	}
//	friend ostream &operator << (ostream &os, const Mint<Modulo>& x) noexcept {
//		return os << x.val;
//	}
//	friend istream& operator >> (istream &is, Mint<Modulo>& x) noexcept {
//		lint tmp; is >> tmp;
//		x = Mint<Modulo>(tmp);
//		return is;
//	}
//	friend constexpr Mint<Modulo> modpow(const Mint<Modulo> &a, lint n) noexcept {
//		Mint res(1), tmp = a;
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
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> A(N);
//	vector<mint> all(N), bf(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (i > j && A[i] > A[j]) bf[i] += 1;
//			if (A[i] > A[j]) all[i] += 1;
//		}
//	}
//
//	DMP(all, bf);
//
//	mint ans = 0;
//	for (int i = 0; i < N; i++) {
//		ans += all[i] * K * (K + 1) / 2 - bf[i] * K;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}