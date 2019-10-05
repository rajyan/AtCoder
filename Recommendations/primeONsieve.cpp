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
//const int N = 10000;
//int min_pf[N];
//vector<int> prime;
//
//class Prime {
//private:
//	vector<int> min_pf; // min_pf[i] = minimum prime factor of i
//	vector<int> prime;
//
//	// linear sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html
//	void sieve(int N) {
//		min_pf[0] = min_pf[1] = -1;
//		for (int i = 2; i < N; i++) {
//			if (min_pf[i] == 0) {
//				prime.push_back(i);
//				min_pf[i] = i;
//			}
//			for (int j = 0; j < (int)(prime.size()); ++j) {
//				if (prime[j] > min_pf[i] || i * prime[j] >= N) break;
//				min_pf[i * prime[j]] = prime[j];
//			}
//		}
//	}
//
//public:
//	Prime(int N = 110000000) : min_pf(N + 1) { 
//		assert(3 <= N && N < INF);
//		sieve(N + 1); 
//	}
//
//	vector<pair<lint, int>> factorize(lint n) {
//
//		vector<pair<lint, int>> res;
//		for (lint i = 2; i * i <= n; i++) {
//			if (n < (lint)min_pf.size()) break;
//			int cnt = 0;
//			while (n % i == 0) {
//				cnt++;
//				n /= i;
//			}
//			if (cnt) res.emplace_back(i, cnt);
//		}
//
//		if (n >= (lint)min_pf.size()) res.emplace_back(n, 1);
//		else {
//			int prev = min_pf[n], cnt = 0;
//			while (n != 1) {
//				int now = min_pf[n];
//				n /= now;
//				cnt++;
//				if (prev != now) {
//					res.emplace_back(prev, cnt);
//					prev = now;
//					cnt = 0;
//				}
//			}
//		}
//		return res;
//	}
//
//	// verified using boost miller_rabin_test https://wandbox.org/permlink/6YepW3J9SQNFwWxu
//	bool isPrime(lint n) {
//		if (n < (int)(min_pf.size())) return min_pf[n] == n;
//		else if (n % 2 == 0 || n % 3 == 0) return false;
//		else if (n % 6 != 1 && n % 6 != 5) return false;
//		for (lint i = 5; i * i <= n; i += 6) {
//			if (n % i == 0) return false;
//			if (n % (i + 2) == 0) return false;
//		}
//		return true;
//	}
//};
//
//template <class T>
//ostream &operator<<(ostream &os, const set<T> &st) {
//	for (const auto &e : st) os << e << " ";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << "(" << p.first << "," << p.second << ")";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << e << " ";
//	return os;
//}
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
//using mint = Mint<>;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	Prime p(1000);
//	map<int, int> mp;
//	for (int i = 2; i <= N; i++) {
//		auto pfact = p.factorize(i);
//		for (const auto &e : pfact) mp[e.first] += e.second;
//	}
//
//	mint ans = 1;
//	for (const auto &e : mp) ans *= e.second + 1;
//	cout << ans << "\n";
//
//	return 0;
//}