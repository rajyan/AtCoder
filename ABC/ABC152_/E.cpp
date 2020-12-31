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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
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
//template<int Modulo = MOD>
//struct Mint {
//
//	lint val;
//
//	constexpr Mint(lint v = 0) noexcept : val(v % Modulo) { if (val < 0) val += Modulo; }
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
//template<class T>
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//constexpr lint modpow(lint a, lint n, lint mod = MOD) {
//	lint res = 1;
//	while (n > 0) {
//		if (n & 1) res = res * a % mod;
//		a = a * a % mod;
//		n >>= 1;
//	}
//	return res;
//}
//
//template <unsigned int N> class Prime {
//private:
//	 // min_pf[i] = minimum prime factor of i
//	unsigned int min_pf[N];
//	unsigned int prime[N];
//	unsigned int cnt = 0;
//
//	// linear sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html
//	constexpr void sieve() {
//		min_pf[0] = min_pf[1] = -1;
//		for (unsigned int i = 2; i < N; i++) {
//			if (min_pf[i] == 0) {
//				prime[cnt++] = i;
//				min_pf[i] = i;
//			}
//			for (unsigned int j = 0; j < cnt; ++j) {
//				if (prime[j] > min_pf[i] || i * prime[j] >= N) break;
//				min_pf[i * prime[j]] = prime[j];
//			}
//		}
//		
//	}
//
//public:
//	constexpr Prime() : min_pf(), prime() { sieve(); }
//	unsigned int get(int n) { return min_pf[n]; }
//};
//
//unsigned int prime[1000001];
//
//int fastRead(void) {
//	char c;
//	while (true) {
//		c = getchar();
//		if ('0' <= c and c <= '9') break;
//	}
//	int res = c - '0';
//	while (true) {
//		c = getchar();
//		if (c < '0' or c > '9') break;
//		res = 10 * res + (c - '0');
//	}
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N = fastRead();
//	Prime<1000000> P;
//	mint ans = 0;
//	for (int i = 0; i < N; i++) {
//		int n = fastRead();
//		ans += modpow(mint(n), MOD - 2);
//		unsigned int prev = P.get(n), cnt = -1;
//		while (n > 0) {
//			int now = P.get(n);
//			n /= now;
//			cnt++;
//			if (prev != now) {
//				chmax(prime[prev], cnt);
//				prev = now;
//				cnt = 0;
//			}
//
//		}
//	}
//
//	mint l = 1;
//	for (int i = 0; i <= 1000000; i++) if(prime[i]) l *= modpow(mint(i), prime[i]);
//
//
//
//	cout << ans * l << "\n";
//
//	return 0;
//}