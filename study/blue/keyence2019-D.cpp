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
//class Factorial {
//private:
//	vector<lint> fac, inv, finv;
//
//	void build(int N) {
//		fac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;
//
//		for (int i = 2; i < N; i++) {
//			fac[i] = fac[i - 1] * i % MOD;
//			inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
//			finv[i] = finv[i - 1] * inv[i] % MOD;
//		}
//	}
//
//public:
//	Factorial(int N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }
//
//	lint operator() (int n, int k) {
//		if (n < k || k < 0) return 0LL;
//		return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
//	}
//
//	lint Pmod(int n, int k) {
//		if (n < k || k < 0) return 0LL;
//		return fac[n] * finv[n - k] % MOD;
//	}
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >>N>>M;
//	vector<int> A(N), B(M);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	for (int i = 0; i < M; i++) cin >> B[i];
//	sort(A.begin(), A.end());
//	sort(B.begin(), B.end());
//
//	mint ans = 1;
//	for (int i = 0; i < N - 1; i++) if (A[i + 1] == A[i]) ans = 0;
//	for (int i = 0; i < M - 1; i++) if (B[i + 1] == B[i]) ans = 0;
//
//	Factorial Fac(2000);
//	int row = 0, col = 0;
//	int cnt = 0, prev = 0;
//	while (row < N && col < M) {
//
//		if (A[row] < B[col]) {
//			cnt += A[row] - prev - 1;
//			prev = A[row];
//			ans *= M - col;
//			ans *= Fac.Pmod(cnt, M - col - 1);
//			cnt -= M - col - 1;
//			row++;
//		}
//		else if (A[row] > B[col]){
//			cnt += B[col] - prev - 1;
//			prev = B[col];
//			ans *= N - row;
//			ans *= Fac.Pmod(cnt, N - row - 1);
//			cnt -= N - row - 1;
//			col++;
//		}
//		else {
//			cnt += A[row] - prev - 1;
//			prev = A[row];
//			ans *= Fac.Pmod(cnt, N + M - (row + col) - 2);
//			cnt -= N + M - (row + col) - 2;
//			row++, col++;
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}