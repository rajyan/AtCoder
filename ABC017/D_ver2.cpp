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
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> sup(N);
//	for (int i = 0; i < N; i++) cin >> sup[i];
//
//	vector<mint> dp(N + 1, 0); // dp[i] := i�Ԗڂ̃T�v�������g�܂ŐH�׏I����Ă����Ԃ̐�
//	dp[0] = 1;
//
//	// bound�͓��ɂ��̋�؂�A�������O�ƌ�͐�΂ɓ������ɂ͐H�ׂ��Ȃ�
//	// dp[i]�����߂�Ƃ��́Abound�Ȍ�ł�������ނ̃T�v��������Ƃ���Ȍ�͓������ɐH�ׂ���̂ő����idp[x]��x�܂ŐH�׏I����Ă���Ƃ������Ƃɒ��Ӂj
//	// �������O�ɓ�����ނ̃T�v�������g���o�Ă���Ƃ�����L�^����΂�k
//
//	// �������O�ɓ�����ނ̃T�v�������g���o�Ă���Ƃ�����L�^
//	vector<int> prev(M + 1, -1), memo(N);
//	for (int i = 0; i < N; i++) {
//		memo[i] = prev[sup[i]];
//		prev[sup[i]] = i;
//	}
//
//	// dp[i] = dp[max(bound, memo[i])]�`dp[i-1] 
//	// ����́A���E����߂肷�邱�Ƃ͂Ȃ��̂Ŏڎ��ō��X�e���E��1�񑫂���������Ηǂ�->O(N)
//	int bound = 0;
//	mint sum = 0;
//	for (int i = 1; i <= N; i++) {
//		sum += dp[i - 1];
//		while (bound <= memo[i - 1]) {
//			sum -= dp[bound];
//			bound++;
//		}
//		dp[i] = sum;
//	}
//	DMP(memo, dp);
//
//	cout << dp[N] << "\n";
//
//	return 0;
//}