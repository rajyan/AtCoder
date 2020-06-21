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
//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
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
//		x = Mint(tmp);
//		return is;
//	}
//
//	constexpr Mint pow(lint n) noexcept {
//		Mint res{ 1 }, tmp{ val };
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
//struct pnt {
//	lint x, y;
//	constexpr pnt(lint x = 0, lint y = 0) noexcept : x(x), y(y) {};
//	constexpr bool operator==(const pnt &rhs) const noexcept { return x == rhs.x && y == rhs.y; }
//	constexpr bool operator<(const pnt & rhs) const noexcept { return x < rhs.x || x == rhs.x && y < rhs.y; }
//	constexpr pnt operator+(const pnt &rhs) const noexcept { return pnt(x + rhs.x, y + rhs.y); }
//	constexpr pnt operator-(const pnt &rhs) const noexcept { return pnt(x - rhs.x, y - rhs.y); }
//	constexpr pnt operator-() const noexcept { return pnt(-x, -y); }
//	constexpr lint operator*(const pnt &rhs) const noexcept { return x * rhs.x + y * rhs.y; }
//	friend istream& operator>>(istream& is, pnt &p) { return is >> p.x >> p.y; }
//	friend ostream& operator<<(ostream& os, const pnt &p) { return os << p.x << " " << p.y << "\n"; }
//	constexpr pnt nor() const noexcept { return pnt(y, -x); }
//	template<class T> T& operator[](vector<vector<T>> &v) { return v[x][y]; }
//};
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<pnt> AB(N);
//	map<pnt, int> mp;
//	for (int i = 0; i < N; i++) cin >> AB[i];
//	int zero = 0;
//	for (int i = 0; i < N; i++) {
//
//		if (AB[i] == pnt(0, 0)) {
//			zero++;
//			continue;
//		}
//
//		lint g = gcd(AB[i].x, AB[i].y);
//		AB[i].x /= g;
//		AB[i].y /= g;
//		if (AB[i].x < 0 || AB[i].x == 0 && AB[i].y < 0) AB[i] = -AB[i];
//		mp[AB[i]]++;
//	}
//
//	DMP(mp);
//
//	mint ans = 1;
//	for (auto &[key, val] : mp) {
//
//		pnt nor = key.nor();
//		if (nor.x < 0) nor = -nor;
//
//		auto it = mp.find(nor);
//		ans *= (mint(2).pow(it == mp.end() ? 0 : it->second) + mint(2).pow(val) - 1);
//		if (it != mp.end()) it->second = 0;
//		val = 0;
//	}
//
//	cout << ans + zero - 1 << "\n";
//
//	return 0;
//}
//
