#ifdef _DEBUG
#include "../../../library/src/debug_template.cpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

template<int Modulo = MOD>
struct Mint {

	lint val;
	constexpr Mint(lint v = 0) noexcept : val(v% Modulo) { if (val < 0) val += Modulo; }

	constexpr Mint& operator+=(const Mint& r) noexcept {
		val += r.val;
		if (val >= Modulo) val -= Modulo;
		return *this;
	}
	constexpr Mint& operator-=(const Mint& r) noexcept {
		val -= r.val;
		if (val < 0) val += Modulo;
		return *this;
	}
	constexpr Mint& operator*=(const Mint& r) noexcept {
		val = val * r.val % Modulo;
		return *this;
	}
	constexpr Mint& operator/=(const Mint& r) noexcept {
		lint a = r.val, b = Modulo, u = 1, v = 0;
		while (b) {
			lint t = a / b;
			a -= t * b; swap(a, b);
			u -= t * v; swap(u, v);
		}
		val = val * u % Modulo;
		if (val < 0) val += Modulo;
		return *this;
	}

	constexpr Mint operator+(const Mint& r) const noexcept { return Mint(*this) += r; }
	constexpr Mint operator-(const Mint& r) const noexcept { return Mint(*this) -= r; }
	constexpr Mint operator*(const Mint& r) const noexcept { return Mint(*this) *= r; }
	constexpr Mint operator/(const Mint& r) const noexcept { return Mint(*this) /= r; }

	constexpr Mint operator-() const noexcept { return val ? Modulo - val : 0; }

	constexpr bool operator==(const Mint& r) const noexcept { return val == r.val; }
	constexpr bool operator!=(const Mint& r) const noexcept { return !((*this) == r); }
	constexpr bool operator< (const Mint& r) const noexcept { return val < r.val; }

	friend ostream& operator << (ostream& os, const Mint<Modulo>& x) noexcept { return os << x.val; }
	friend istream& operator >> (istream& is, Mint<Modulo>& x) noexcept {
		lint tmp; is >> tmp;
		x = Mint(tmp);
		return is;
	}

	constexpr Mint pow(lint n) const noexcept {
		Mint res = 1, tmp = val;
		while (n > 0) {
			if (n & 1) res *= tmp;
			tmp *= tmp;
			n >>= 1;
		}
		return res;
	}
};

using mint = Mint<>;

class Factorial {
private:
	vector<mint> fac, inv, finv;

	void build(int N) {
		fac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;

		for (int i = 2; i < N; i++) {
			fac[i] = fac[i - 1] * i;
			inv[i] = -inv[MOD % i] * (MOD / i);
			finv[i] = finv[i - 1] * inv[i];
		}
	}

public:
	Factorial(int N = 110000) : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }

	mint Cmod(int n, int k) {
		if (n < k || k < 0) return 0LL;
		return fac[n] * (finv[k] * finv[n - k]);
	}

	mint Pmod(int n, int k) {
		if (n < k || k < 0) return 0LL;
		return fac[n] * finv[n - k];
	}

	mint Hmod(int n, int k) {
		if (n < 0 || k < 0) return 0LL;
		return k == 0 ? 1 : Cmod(n + k - 1, k);
	}

};


int main() {

	int N, M, L;
	cin >> N >> M >> L;

	Factorial Fc;
	mint ans = 0;
	
	ans += Fc.Cmod(N, L) * Fc.Pmod(L, L) / 2;

	N -= L;
	M -= L - 1;

	if (M == 0) {
		cout << ans << "\n";
		return 0;
	}

	mint sum = 0;
	for (int i = 0; i <= M / 2; i++) {

		mint tmp = Fc.Cmod(N, 2 * i) / Fc.Pmod(i, i);
		for (int j = 0; j < 2 * i; j += 2) {
			tmp *= Fc.Cmod(2 * i - j, 2);
		}

		int a = N - 2 * i;
		int b = M - 2 * i;
		if (b == 0) sum += tmp;
		if (b >= a) continue;

		// ������
		// ����: ���� <= N/2�Asum(�����T�C�Y+1)<N => M + �����@<= N

		DMP(sum);
	}


	cout << ans * sum << "\n";

	return 0;
}
