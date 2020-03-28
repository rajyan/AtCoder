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
//
//	lint val;
//	constexpr Mint(lint v = 0) noexcept : val(v % Modulo) { if (val < 0) v += Modulo; }
//
//	constexpr Mint& operator += (const Mint &r) noexcept {
//		val += r.val;
//		if (val >= Modulo) val -= Modulo;
//		return *this;
//	}
//	constexpr Mint& operator -= (const Mint &r) noexcept {
//		val -= r.val;
//		if (val < 0) val += Modulo;
//		return *this;
//	}
//	constexpr Mint& operator *= (const Mint &r) noexcept {
//		val = val * r.val % Modulo;
//		return *this;
//	}
//	constexpr Mint& operator /= (const Mint &r) noexcept {
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
//	constexpr Mint operator + (const Mint &r) const noexcept { return Mint(*this) += r; }
//	constexpr Mint operator - (const Mint &r) const noexcept { return Mint(*this) -= r; }
//	constexpr Mint operator * (const Mint &r) const noexcept { return Mint(*this) *= r; }
//	constexpr Mint operator / (const Mint &r) const noexcept { return Mint(*this) /= r; }
//
//	constexpr int getmod() { return Modulo; }
//	constexpr Mint operator - () const noexcept { return val ? Modulo - val : 0; }
//
//	constexpr bool operator == (const Mint &r) const noexcept { return val == r.val; }
//	constexpr bool operator != (const Mint &r) const noexcept { return val != r.val; }
//
//	friend ostream &operator << (ostream &os, const Mint<Modulo> &x) noexcept { return os << x.val; }
//	friend istream &operator >> (istream &is, Mint<Modulo> &x) noexcept {
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
////// mod, base from https://gist.github.com/privet-kitty/295ac9202b7abb3039b493f8238bf40f
//class RollingHash {
//
//private:
//	using Mint1 = Mint<2147483647>;
//	using Mint2 = Mint<2147483629>;
//
//	vector<Mint1> hash1, pow1;
//	vector<Mint2> hash2, pow2;
//	const int base1 = 2147483634;
//	const int base2 = 2147483627;
//	int sz;
//
//public:
//	RollingHash() {}
//	RollingHash(const string &s) :sz(s.size()) {
//
//		hash1.assign(sz + 1, 0); pow1.assign(sz + 1, 1);
//		hash2.assign(sz + 1, 0); pow2.assign(sz + 1, 1);
//
//		for (int i = 0; i < sz; i++) {
//			hash1[i + 1] = hash1[i] * base1 + s[i];
//			pow1[i + 1] = pow1[i] * base1;
//			hash2[i + 1] = hash2[i] * base2 + s[i];
//			pow2[i + 1] = pow2[i] * base2;
//		}
//	}
//
//	pair<int, int> get(int l, int r) {
//		int res1 = (hash1[r] - hash1[l] * pow1[r - l]).val;
//		int res2 = (hash2[r] - hash2[l] * pow2[r - l]).val;
//		return { res1, res2 };
//	}
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string S;
//	cin >> S;
//
//	RollingHash rh(S);
//	map<pair<int,int>, int> memo;
//	for (int d = 1; d <= 10; d++) {
//		for (int i = 0; i <= (int)S.size() - d; i++) {
//			memo[rh.get(i, i + d)]++;
//		}
//	}
//
//	int N;
//	cin >> N;
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		string s;
//		cin >> s;
//		RollingHash tmprh(s);
//		if (memo.find(tmprh.get(0, s.size())) != memo.end()) ans += memo[tmprh.get(0,s.size())];
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}