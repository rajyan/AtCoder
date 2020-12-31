//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
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
//		lint a = r.val, b = Modulo, u = 1, v = 0, t;
//		while (b) {
//			t = a / b;
//			a -= t * b; swap(a, b);
//			u -= t * v; swap(u, v);
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
//class Combi {
//private:
//	vector<mint> fac, inv, finv;
//
//	void init(int N) {
//		fac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;
//
//		for (int i = 2; i < N; i++) {
//			fac[i] = fac[i - 1] * i;
//			inv[i] = -inv[MOD%i] * (MOD / i);
//			finv[i] = finv[i - 1] * inv[i];
//		}
//	}
//
//public:
//	Combi(int N = 100000) : fac(N + 1), inv(N + 1), finv(N + 1) { init(N + 1); }
//
//	mint operator() (int n, int k) {
//		if (n < k || k < 0) return 0LL;
//		return fac[n] * (finv[k] * finv[n - k]);
//	}
//
//	mint Pmod(int n, int k) {
//		if (n < k || k < 0) return 0LL;
//		return fac[n] * finv[n - k];
//	}
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	map<int, int> mp;
//	pair<int, int> twice;
//	int a;
//	for (int i = 0; i <= N; i++) {
//		cin >> a;
//		if (mp.find(a) != mp.end()) twice = {mp[a], i};
//		else mp[a] = i;
//	}
//
//	DMP(twice.first, twice.second);
//
//	Combi C(100001);
//	for (int i = 1; i <= N + 1; i++) {
//		cout << C(N + 1, i) - C(N - (twice.second - twice.first), i - 1) << "\n";
//	}
//
//	return 0;
//}