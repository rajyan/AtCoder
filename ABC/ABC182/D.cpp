//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
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
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template<class T>
//inline bool chmax(T& a, const T b) { return a < b && (a = b, true); }
//
//template <class T>
//class CuSum {
//private:
//	vector<T> cusum;
//
//public:
//	CuSum(vector<T> const& vec) : cusum(vec.size() + 1) {
//		for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
//	}
//	CuSum(const int N) : cusum(N + 1) {}
//	void add(const int i, const T& x) { cusum[i + 1] += x; }
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
//	const T& operator[](int i) { return cusum[i + 1]; }
//	T back() { return cusum.back(); }
//};
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<lint> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	CuSum<lint> cuA(A);
//
//	vector<lint> M(N + 1);
//	for (int i = 0; i < N; i++) {
//		chmax(M[i + 1], max(cuA[i], M[i]));
//	}
//
//	lint ans = 0, now = 0;
//	for (int i = 0; i <= N - 1; i++) {
//		chmax(ans, now + M[i + 1]);
//		now += cuA[i];
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
