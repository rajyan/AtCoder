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
//struct pnt {
//	int r, c;
//	pnt(int r = 0, int c = 0) :r(r), c(c) {};
//	bool operator==(const pnt &rhs) const { return r == rhs.r && c == rhs.c; }
//	bool operator<(const pnt & rhs) const { return r < rhs.r || r == rhs.r && c < rhs.c; }
//	const pnt operator+(const pnt &rhs) { return pnt(r + rhs.r, c + rhs.c); }
//	friend istream& operator>>(istream& is, pnt &p) { is >> p.c >> p.r; p.r--, p.c--; return is; }
//	template<class T> T& operator[](vector<vector<T>> &v) { return v[r][c]; }
//};
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
//	int H, W;
//	cin >> H >> W;
//
//	vector<vector<int>> grid(H, vector<int>(W));
//	for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> grid[i][j];
//
//	auto in_grid = [&](pnt p) {return 0 <= p.r&&p.r < H && 0 <= p.c&&p.c < W; };
//
//	vector<vector<mint>> ans(H, vector<mint>(W));
//	auto dfs = [&](auto &&f, pnt now) -> mint {
//	
//		mint res = 1;
//		vector<pnt> dxdy{ {1,0},{-1,0},{0,1},{0,-1} };
//		for (const auto &del : dxdy) {
//			pnt next = now + del;
//			if (in_grid(next) && now[grid] < next[grid]) {
//				if (next[ans] == 0) next[ans] = f(f, next);
//				res += next[ans];
//			}
//		}
//
//		return res;
//	};
//
//	mint sum = 0;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			pnt now = pnt(i, j);
//			if (now[ans] == 0) now[ans] = dfs(dfs, now);
//			sum += now[ans];
//		}
//	}
//
//	cout << sum << "\n";
//
//	return 0;
//}