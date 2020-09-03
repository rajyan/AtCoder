#ifdef _DEBUG
#include "../../library/library/debug_template.cpp"
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
#include <unordered_set>
#include <queue>
#include <numeric>
#include <algorithm>
#include <bitset>

using namespace std;
using lint = long long;
constexpr int MOD = 998244353, INF = 1010101010;
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

	constexpr Mint& operator += (const Mint& r) noexcept {
		val += r.val;
		if (val >= Modulo) val -= Modulo;
		return *this;
	}
	constexpr Mint& operator -= (const Mint& r) noexcept {
		val -= r.val;
		if (val < 0) val += Modulo;
		return *this;
	}
	constexpr Mint& operator *= (const Mint& r) noexcept {
		val = val * r.val % Modulo;
		return *this;
	}
	constexpr Mint& operator /= (const Mint& r) noexcept {
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

	constexpr Mint operator + (const Mint& r) const noexcept { return Mint(*this) += r; }
	constexpr Mint operator - (const Mint& r) const noexcept { return Mint(*this) -= r; }
	constexpr Mint operator * (const Mint& r) const noexcept { return Mint(*this) *= r; }
	constexpr Mint operator / (const Mint& r) const noexcept { return Mint(*this) /= r; }

	constexpr int getmod() { return Modulo; }
	constexpr Mint operator - () const noexcept { return val ? Modulo - val : 0; }

	constexpr bool operator == (const Mint& r) const noexcept { return val == r.val; }
	constexpr bool operator != (const Mint& r) const noexcept { return val != r.val; }

	friend ostream& operator << (ostream& os, const Mint<Modulo>& x) noexcept { return os << x.val; }
	friend istream& operator >> (istream& is, Mint<Modulo>& x) noexcept {
		lint tmp; is >> tmp;
		x = Mint(tmp);
		return is;
	}

	constexpr Mint pow(lint n) noexcept {
		Mint res{ 1 }, tmp{ val };
		while (n > 0) {
			if (n & 1) res *= tmp;
			tmp *= tmp;
			n >>= 1;
		}
		return res;
	}
};

using mint = Mint<>;

template<class T = mint>
class Combination {
private:
	vector<T> fac, inv, finv;

	void build(int N) {
		fac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;

		for (int i = 2; i < N; i++) {
			fac[i] = fac[i - 1] * i;
			inv[i] = -inv[MOD % i] * (MOD / i);
			finv[i] = finv[i - 1] * inv[i];
		}
	}

public:
	Combination(int N = 310000) : fac(N + 1), inv(N + 1), finv(N + 1) { build(N + 1); }

	T operator()(int n, int k) {
		if (n < k || k < 0) return 0LL;
		return fac[n] * (finv[k] * finv[n - k]);
	}

};


int main() {

	lint N, A, B, K;
	cin >> N >> A >> B >> K;

	unordered_set<lint> memo;
	for (int a = 0; a <= N; a++) {
		if (K - A * a < 0) break;
		memo.emplace(K - A * a);
	}
	vector<pair<lint, lint>> idx;
	for (int b = 0; b <= N; b++) {
		if (B * b > K) break;
		if (memo.find(B * b) != memo.end()) {
			lint  a = (K - B * b) / A;
			idx.emplace_back(a, b);
		}
	}
	DMP(idx);

	mint ans = 0;
	Combination C;
	for (const auto& [a, b] : idx) ans += C(N, a) * C(N, b);

	cout << ans << "\n";

	return 0;
}
