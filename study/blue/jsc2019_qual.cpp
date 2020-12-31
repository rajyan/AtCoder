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
//#include <bitset>
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
//	while (*str != ',') cerr << *str++;
//	cerr << " = " << h << "\n";
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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	//const int len = 8;
//	//assert(len % 2 == 0);
//
//	//auto dfs = [&](auto &&self, int now, int cnt, vector<int> used, bitset<len> s) -> void {
//
//	//	if (now == -1) {
//	//		for (int i = 0; i < len; i++) {
//	//			if (!used[i]) {
//	//				used[i] = ++cnt;
//	//				self(self, i, cnt, used, s);
//	//				return;
//	//			}
//	//		}
//	//	}
//	//	else {
//	//		for (int i = 0; i < len; i++) {
//	//			if (!used[i]) {
//	//				auto tmp = used;
//	//				tmp[i] = cnt + 1;
//	//				int l, r;
//	//				tie(l, r) = minmax(i, now);
//
//	//				bitset<len> t = bitset<len>(string(l, '0') + string(r - l + 1, '1') + string(len - r - 1, '0'));
//	//				// DMP(s, l, r, t);
//	//				self(self, -1, cnt + 1, tmp, s ^ t);
//	//			}
//	//		}
//	//		return;
//	//	}
//
//	//	if (s == bitset<len>(string(len, '1'))) {
//	//		ans += 1;
//	//		DMP(used);
//	//	}
//
//	//};
//
//	//dfs(dfs, -1, 0, vector<int>(len), bitset<len>("01001110"));
//
//	int N;
//	cin >> N;
//	N <<= 1;
//	
//	string s;
//	cin >> s;
//
//	vector<int> dp(N);
//	dp[0] = s[0] == 'B';
//	for (int i = 0; i < N - 1; i++) dp[i + 1] = dp[i] ^ (s[i] == s[i + 1]);
//
//	mint ans = 1;
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		
//		if (dp[i] == 1) sum++;
//		else {
//
//			if (sum == 0) {
//				ans = 0;
//				break;
//			}
//			ans *= sum;
//			sum--;
//		}
//
//	}
//
//	if (sum != 0) ans = 0;
//
//	for (int i = 1; i <=  N / 2; i++) ans *= i;
//	cout << ans << "\n";
//
//	return 0;
//}