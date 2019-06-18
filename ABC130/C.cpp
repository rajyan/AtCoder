#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

#include <random>
#include <chrono>

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

const int MOD = 1000000007, INF = 1111111111;
using namespace std;
using lint = long long;


template<int Modulo = MOD> struct Mint {
	lint val;
	constexpr Mint(lint v = 0) noexcept : val(v % Modulo) {
		if (val < 0) v += Modulo;
	}
	constexpr int getmod() { return Modulo; }
	constexpr Mint operator - () const noexcept { return val ? Modulo - val : 0; }
	constexpr Mint operator + (const Mint& r) const noexcept { return Mint(*this) += r; }
	constexpr Mint operator - (const Mint& r) const noexcept { return Mint(*this) -= r; }
	constexpr Mint operator * (const Mint& r) const noexcept { return Mint(*this) *= r; }
	constexpr Mint operator / (const Mint& r) const noexcept { return Mint(*this) /= r; }
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
		lint a = r.val, b = Modulo, u = 1, v = 0, t;
		while (b) {
			t = a / b;
			a -= t * b; swap(a, b);
			u -= t * v; swap(u, v);
		}
		val = val * u % Modulo;
		if (val < 0) val += Modulo;
		return *this;
	}
	constexpr bool operator == (const Mint& r) const noexcept {
		return this->val == r.val;
	}
	constexpr bool operator != (const Mint& r) const noexcept {
		return this->val != r.val;
	}
	friend ostream &operator << (ostream &os, const Mint<Modulo>& x) noexcept {
		return os << x.val;
	}
	friend istream& operator >> (istream &is, Mint<Modulo>& x) noexcept {
		lint tmp; is >> tmp;
		x = Mint<Modulo>(tmp);
		return is;
	}
	friend constexpr Mint<Modulo> modpow(const Mint<Modulo> &a, lint n) noexcept {
		Mint res(1), tmp = a;
		while (n > 0) {
			if (n & 1) res *= tmp;
			tmp *= tmp;
			n >>= 1;
		}
		return res;
	}
};

using mint = Mint<>;

lint powmod(lint a, lint n, lint mod) {
	lint res = 1;
	while (n > 0) {
		if (n & 1) res = res * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return res;
}

struct RandNum {

	mt19937 mt;
	RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count()) {}

	lint operator()(lint a, lint b) {
		uniform_int_distribution<lint> dist(a, b);
		return dist(mt);
	}	
	lint operator()(lint b) { return (*this)(0LL, b); }

	template<class Ite>
	void shuf(Ite first, Ite last) { shuffle(first, last, mt); }

};

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	vector<mint> Yah(3,1000000008);
	cout << Yah[0];
	mint q;
	cin >> q;
	cout << q << "\n";
	cout << modpow(mint(2), 10) << "\n";
	lint W, H, x, y;
	cin >> W >> H >> x >> y;

	RandNum ran;
	cout << ran(-1,10000000000) << "\n";
	cout << ran(-1.0,10000000000.0) << "\n";
	
	vector<int> a(5);
	for (int i = 0; i < 5; i++) {
		a[i] = ran(10);
		cout << a[i] << " ";
	}
	cout << "\n";

	ran.shuf(a.begin(), a.end());
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}

	return 0;
}