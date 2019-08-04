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
//template <typename T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < vec.size(); i++) {
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
//lint modpow(lint a, lint n, lint mod) {
//	lint res = 1;
//	while (n > 0) {
//		if (n & 1) res = res * a % mod;
//		a = a * a % mod;
//		n >>= 1;
//	}
//	return res;
//}
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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string s, t;
//	cin >> s >> t;
//
//	//vector<mint> hash(s.size());
//	//for (int i = 0; i < s.size(); i++) {
//	//	hash[i] = mint(s[i] - '0') * modpow(mint(11), i + 1);
//	//}
//	//DMP(hash);
//
//	//vector<mint> sufhash(s.size() + 1);
//	//mint th = 0;
//	//for (int i = 0; i < t.size(); i++) th += modpow(mint(11), i);
//	//for (int i = 0; i < ; i++) {
//	//	if()
//	//}
//
//
//	return 0;
//}