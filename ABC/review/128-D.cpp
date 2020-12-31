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
//template <class T>
//class CuSum {
//private:
//	vector<T> cusum;
//
//public:
//	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
//		for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
//	}
//	CuSum(const int N) : cusum(N + 1) {}
//	void add(const int i, const T &x) { cusum[i + 1] += x; }
//	void build() { for (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }
//
//	// partial sum of 0-indexed [l, r)
//	T operator()(int l, int r) {
//		if (r < l || r < 0) {
//			assert(0);
//			return T(0);
//		}
//		else return cusum[r] - cusum[l];
//	}
//	// 0-indexed
//	const T &operator[](int i) { return cusum[i + 1]; }
//	T back() { return cusum.back(); }
//};
//
//template<class T>
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> V(N);
//	for (int i = 0; i < N; i++) cin >> V[i];
//
//	int ans = 0;
//	CuSum<int> CuV(V);
//	for (int i = 0; i <= min(N, K); i++) {
//
//		for (int j = 0; j <= i; j++) {
//
//			int sum = CuV(0, j) + CuV(N - (i - j), N);
//
//			vector<int> minus;
//			minus.reserve(i);
//			for (int k = 0; k < j; k++) if (V[k] < 0) minus.emplace_back(V[k]);
//			for (int k = N - (i - j); k < N; k++) if (V[k] < 0) minus.emplace_back(V[k]);
//
//			sort(minus.begin(), minus.end());
//			sum -= accumulate(minus.begin(), minus.begin() + min(K - i, (int)minus.size()), 0);
//
//			chmax(ans, sum);
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}